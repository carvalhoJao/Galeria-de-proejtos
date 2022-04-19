#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <unistd.h>
#include <time.h>       // time_t, time, asctime
#define MAX 5

float filaValores[MAX];
int fimOrdem = 0;
int fimValores = 0;
int filaOrdem[MAX];

    /* A loja GameJStock trata-se de uma venda online de produtos relacionados a games,
    tais como consoles, acessórios e os prórpios jogos*/

struct loja {
    char nome[50];
    char tipo[50];
    char marca[50];
    char modelo[10];
    float valor;
    int qtd;
    int codItem;
    
};

struct cliente {
    char nome [50];
    char end[50];
    char numero[10];
    int pagamento;
    char cpf[15];
};

int mostraItem (struct loja *pt1, struct loja *pt2, struct loja *pt3, struct loja *pt4, struct loja *pt5, struct loja *pt6){
    printf("\n\n       %s     |   %s   |     %s", pt1->nome, pt2->nome, pt3->nome);
    printf("\n             R$ %.2f         |", pt1->valor);                             //Nomes e valores
    printf("               R$ %.2f                     |", pt2->valor);
    printf("       R$ %.2f         ", pt3->valor);
    
    printf("\n                               |                                            |");
    
    printf("\nTipo: %s                     |", pt1->tipo);
    printf(" Tipo: %s                                 |", pt2->tipo);                   //Tipos
    printf(" Tipo: %s           ", pt3->tipo);
    
    printf("\nMarca: %s    | Marca: %s                             | Marca: %s", pt1->marca, pt2->marca, pt3->marca); // Marca
    
    //Itens da 2a Fila
    printf("\n\n_____________________________________________________________________________________________________________");
    
    printf("\n\n       %s     |   %s    |     %s", pt4->nome, pt5->nome, pt6->nome);
    printf("\n             R$ %.2f            |", pt4->valor);                             //Nomes e valores
    printf("        R$ %.2f           |", pt5->valor);
    printf("       R$ %.2f         ", pt6->valor);
    
    printf("\n                                   |                             |");
    
    printf("\nTipo: %s                      |", pt4->tipo);
    printf(" Tipo: %s               |", pt5->tipo);                   //Tipos
    printf(" Tipo: %s           ", pt6->tipo);
    
    printf("\nMarca: %s                 | Marca: %s             | Marca: %s", pt4->marca, pt5->marca, pt6->marca); // Marca
    printf("\n\n_____________________________________________________________________________________________________________");
    
};

float realizarCompras(float *ptrCarrinho, struct loja *ptrProd, int *op, char *matriz){
    
    int i, novoOp, j, tamNome, unid;
    
    printf("\nVoce selecionou %s por R$ %.2f \nQuantas unidades quer comprar?: ", ptrProd->nome, ptrProd->valor);
    scanf("%d", &unid);
    
    if (ptrProd->qtd >= unid){
        *ptrCarrinho = *ptrCarrinho + (ptrProd->valor * unid);
        ptrProd->qtd = ptrProd->qtd - unid;
        printf("\nAdicionando %d unidade(s) totalizando %.2f...", unid, (ptrProd->valor * unid));
        strcpy(matriz, ptrProd->nome);
    }
    
    else if (ptrProd->qtd < unid){
        printf("\nQuantidade indisponivel! \nSelecione outro item...");
    }
    
    sleep(1);
    printf("\nDigite 0 para comprar novamente ou 8 para verificar o carrinho: ");
    scanf("%d", &novoOp);
    fflush(stdin);
    *op = novoOp;
    
}

float valorCarrinho(char *matriz, float *ptrCar, int *op){
    int i, j, novoOp;
    
    
    if (*ptrCar > 0){
        printf("\n\nEsta é sua cesta de compras: \n");
        for(i = 0 ; i < 7; i++){
            for(j = 0; j < 50; j++){
                printf("%c", matriz[i * 50 + j]);
            }
            printf("\n");
        }
        if (*ptrCar > 250){
            printf("Você ganhou frete grátis!!\nValor total: R$ %.2f", *ptrCar);
        }
        else if (*ptrCar < 250){
            printf("Valor da compra: R$ %.2f \nValor do frete padrão: R$15,90", *ptrCar);
            *ptrCar = *ptrCar + 15.90;
            printf("\nValor total: R$ %.2f", *ptrCar);
        }
    }
    
    else if (*ptrCar == 0){
        printf("\nCarrinho vazio!\n");
    }
    printf("\nDigite 9 para seguir ao checkout ou 0 para continuar comprando: ");
    scanf("%d", &novoOp);
    fflush(stdin);
    *op = novoOp;
}

int checkout(struct cliente *ptrCliente, float *ptrCar, char *matriz){
    int tamVetor, op;
    FILE *pArq = NULL;
    time_t dataHora;
    struct tm *infoTempo;
    char data[30] = "";
    int i, j;
	
    
    tamVetor = strlen(ptrCliente->end);
    ptrCliente->end[tamVetor - 1] = '\0';
    printf("\n\nResumo do pedido:");
    printf("\nEndereço: %s , nº %s", ptrCliente->end, ptrCliente->numero);
    printf("Destinatário: %s \nValor da compra: R$%.2f", ptrCliente->nome, *ptrCar);
    printf("\nSelecione o método de pagamento\n1- Cartão de crédito \n2- Pix \n3- Boleto bancário\n\nSeleção: ");
    scanf("%d", &op);
    fflush(stdin);
    
    if (op == 1){
        printf("\nMétodo de pagamento: Cartão de crédito 1x R$%.2f", *ptrCar);
        
    }
    if (op == 2){
        printf("\nMétodo de pagamento: Pix no valor de R$%.2f", *ptrCar);
    }
    
    if (op == 3){
        printf("\nMétodo de pagamento: Boleto bancário R$%.2f à vista", *ptrCar);
    }
    
/*************************************Ordem das Filas*************************************************
    if (fimValores == 5){
        printf("\n\nFila de Valores já está cheia!!");
    }
    else {
        filaValores[fimValores] = *ptrCar;
        fimValores++;
        /*for(i=0; i < MAX; i++){
            printf("\nfimValores: %.2f", filaValores[i]);
        }
    }
    
*/
//*************************************Relatório_de_Vendas*************************************************
    
    time (&dataHora);
    
    // Obtém tempo local
    infoTempo = localtime(&dataHora);
    
    // Converte a data - 19/04/2020 19:08:02
    strftime (data,30,"%d/%m/%y %T", infoTempo); 
    pArq = fopen("Relatório_de_Vendas.txt","a");
	
	if(pArq == NULL) 
	{
		printf("Erro ao abrir arquivo.\n");
		return 0;
	}
	
	// Escreve a mensagem no arquivo
	fprintf(pArq, "Data da compra: %s\n", data);
	fprintf(pArq, "Nome do cliente: %s\n", ptrCliente->nome);
	fprintf(pArq, "CPF: %s\n", ptrCliente->cpf);
	fprintf(pArq, "Detalhes da compra:\n");
	
	for(i = 0 ; i < 6; i++){
        for(j = 0; j < 50; j++){
            if (matriz[i * 50 + j]){
                fprintf(pArq, "%c", matriz[i * 50 + j]);
            }
        }
        fprintf(pArq, "\n");
    }
    fprintf(pArq, "Valor total: R$%.2f\n", *ptrCar);
    
	
	// Fecha
	fclose(pArq);
	
    
}


/* Aqui ocorre a impressão das filas e correção da ordem de envio para produtos mais caros
int filaDeEntrega(){
    int i;
    
    for(i = 0; i < MAX; i++){
        if (filaValores[i] > filaValores[i+1]){
            filaOrdem[i]
        }
    }
}
*/
int main()
{
    struct loja game1 = {"God of War Ragnarok", "Jogo", "Santa Monica Studios", "PS5", 259.99, 1, 1};
    struct loja game2 = {"Assassins Creed Brotherhood Remastered", "Jogo", "Ubisoft", "PS4", 79.90, 10, 2};
    struct loja game3 = {"Forza Horizon 5", "Jogo", "Playground Games", "XSX", 259.99, 10, 3};
    struct loja console1 = {"Playstation 4 Pro - 1TB", "Console", "Playstation", "Pro 4K", 2799.90, 2, 4};
    struct loja console2 = {"Nintendo Switch - 32GB", "Console", "NINTENDO", "NS 32", 2115.50, 1, 5};
    struct loja console3 = {"Xbox Series X - 1TB", "Console", "Microsoft Inc", "Xbox", 5524.90, 2, 6};
    struct cliente cli1 = {"","","",0,""};
    float carrinho = 0;
    int op, i, j;
    char matrizCar[6][50] = {""};
    
    
    inicioNovo:
    printf("Bem-vindo(a) GameJStock! O maior atacado de games do Brasil! \nVeja abaixo os itens da nossa loja\n");

    inicio: 
    mostraItem(&game1, &game2, &game3, &console1, &console2, &console3);
    
    printf("\n\nSelecione qual opcão deseja comprar : ");
    scanf("%d", &op);
    
    menus:
    switch (op){
        case 1 :
            realizarCompras(&carrinho, &game1, &op, matrizCar[1]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
            
        case 2 :
            realizarCompras(&carrinho, &game2, &op, matrizCar[2]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
        case 3 :
            realizarCompras(&carrinho, &game3, &op, matrizCar[3]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
            
        case 4 :
            realizarCompras(&carrinho, &console1, &op, matrizCar[4]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
            
        case 5 :
            realizarCompras(&carrinho, &console2, &op, matrizCar[5]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
            
        case 6 :
            realizarCompras(&carrinho, &console3, &op, matrizCar[6]);
            if (op == 8){
                goto menus;
            }
            goto inicio;
            
        case 8 :
            valorCarrinho(matrizCar[0], &carrinho, &op);
            if (op == 9){
                goto menus;
            }
            goto inicio;
            
        case 9:
            printf("\n\nVamos prosseguir com seu cadastro! Preencha abaixo os dados solicitados:\nNome: ");
            fgets(cli1.nome, 48, stdin);
            
            printf("CPF: ");
            fgets(cli1.cpf, 12, stdin);
            fflush(stdin);
            
            printf("Endereço: ");
            fgets(cli1.end, 48, stdin);
            
            printf("Numero: ");
            fgets(cli1.numero, 8, stdin);
            
            checkout(&cli1, &carrinho, matrizCar[0]);
            
    }
    
    carrinho = 0;
    memset(matrizCar, 0, sizeof(matrizCar));
    printf("\n\n***********Obrigado por comprar com a gente! Volte sempre!!***********\n\n\n\n");
    sleep(4);
    goto inicioNovo;
    
    return 0;
}

