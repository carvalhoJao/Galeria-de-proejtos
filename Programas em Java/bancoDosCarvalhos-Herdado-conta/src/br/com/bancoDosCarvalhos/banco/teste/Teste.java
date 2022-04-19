package br.com.bancoDosCarvalhos.banco.teste;

import br.com.bancoDosCarvalhos.banco.modelo.*;

public class Teste {
	public static void main(String[] args) {
		
		GuardadorArray armario = new GuardadorArray();
		
		Conta cc1 = new ContaCorrente(561, 251);
		Conta cc2 = new ContaCorrente(654, 3561465);
		
		armario.adiciona(cc1);
		armario.adiciona(cc2);
		
		int tamanho = armario.getContadorDeContas();
		
		System.out.println("O Array possui " + tamanho + " contas!");
	}
}
