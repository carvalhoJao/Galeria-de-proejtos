#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <stdio_ext.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#define MAX 6

int fila[MAX];
int cont = 0;
int senhaComum = 10;
int senhaPrioritaria = 1;
int resetSenha = 10;
    


struct clientes{
    char nome[50];
    char destino[50];
    int idade;
    int senha;
};

void cadastroCliente (struct clientes *ptrCli){
    printf("\n\nDigite seu nome completo: ");
    fgets(ptrCli[cont].nome, 48, stdin);
    ptrCli[cont].nome[strlen(ptrCli[cont].nome)-1] = '\0';
    
    printf("Idade: ");
    scanf("%d", &ptrCli[cont].idade);
    fflush(stdin);
    
    printf("Destino da viagem: ");
    fgets(ptrCli[cont].destino, 48, stdin);
    ptrCli[cont].destino[strlen(ptrCli[cont].destino)-1] = '\0';
    
    
    
    if (ptrCli[cont].idade >= 65){ 
        ptrCli[cont].senha = senhaPrioritaria;
        fila[cont] = senhaPrioritaria;
        senhaPrioritaria++;
    }
    
    else {
        ptrCli[cont].senha = senhaComum;
        fila[cont] = senhaComum;
        senhaComum++;
    }
    cont++;
}

void imprimeClientes(struct clientes *ptrCli){
    int i;
    
    printf("\n\nDetalhamento de atendimentos:");
    printf("\n");
    sleep(2);
    
    for(i=0; i < MAX; i++){
        printf("\n\nNome: %s \nIdade: %d \nDestino: %s \nSenha: %d", ptrCli[i].nome, ptrCli[i].idade, ptrCli[i].destino, ptrCli[i].senha);
    }
}


void filaOrdenada (int *vetor) {
    int troca = true;
    int aux, i;
    
    while (troca == true) {
        troca = false;  
        
        for (i = 0; i < (cont-1); i++) {
           
            if (vetor[i] > vetor[i+1])  {
                troca = true;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
            
        }
    }
}

int imprimeArquivo (struct clientes *ptrCli) {
    FILE *pArq = NULL;
    int i;
    pArq = fopen("Ordem_de_Atendimento.txt","a");
    
    if(pArq == NULL) {
		printf("Erro ao abrir arquivo.\n");
		return 0;
	}
	
	fprintf(pArq, "\nOrdem das senhas:\n");
    
    for (i=0; i < cont; i++){
        if (i == cont-1){
            fprintf(pArq, "%d", fila[i]);    
        }
        else {
            fprintf(pArq, "%d - ", fila[i]);
        }
    }
    
    if (cont == MAX){
        fprintf(pArq, "\n\nNova rodada de atendimento:");
    }
	
	fclose(pArq);
}

int main()
{
    struct clientes cliente[6];
    int i, j;
    login:
    
    printf("\n\t\tBem-vindo a Bifrost viagens! \n\n\tVamos coletar alguns dados para o seu atendimento -");
    
    for (i=0; i < MAX; i++){
        cadastroCliente(cliente);
        filaOrdenada(fila);
        
        printf("\nOrdem de atendimento : \n");
        for (j=0; j < cont; j++){
            if(j == cont-1){
                printf("%d", fila[j]);
            }
            else {
                printf("%d - ", fila[j]);
            }
        }
        
        imprimeArquivo(cliente);
    }
    
    imprimeClientes(cliente);
    
    
    printf("\n\nGerando novas senhas...");
    
    senhaPrioritaria = resetSenha;
    resetSenha = resetSenha + 10;
    senhaComum = resetSenha + 10;
    cont = 0;
    printf("\n");
    sleep(3);
    memset(&cliente, 0, sizeof(struct clientes));
    
    goto login;

    return 0;
}



