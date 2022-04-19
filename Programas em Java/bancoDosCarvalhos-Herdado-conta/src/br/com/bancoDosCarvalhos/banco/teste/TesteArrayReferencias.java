package br.com.bancoDosCarvalhos.banco.teste;

import br.com.bancoDosCarvalhos.banco.modelo.*;

public class TesteArrayReferencias {
	public static void main(String[] args) {
		ContaCorrente[] contas = new ContaCorrente[5];
		
		ContaCorrente cc1  = new ContaCorrente(212, 10233);
		contas[1] = cc1;
		
		ContaCorrente cc2 = new ContaCorrente(321, 04343);
		ContaCorrente ref = cc2;
		
		System.out.println(contas[1].getAgencia());
		System.out.println(ref.getAgencia());
		
	}
}
