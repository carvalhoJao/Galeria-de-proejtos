package br.com.bancoDosCarvalhos.banco.teste.util;

import java.util.ArrayList;
import java.util.Collection;

import br.com.bancoDosCarvalhos.banco.modelo.Conta;
import br.com.bancoDosCarvalhos.banco.modelo.ContaCorrente;

public class TesteArrayEquals {

	public static void main(String[] args) {
		
		//Generics
		Collection<Conta> list = new ArrayList<Conta>();
		
		Conta cc1 = new ContaCorrente(561, 251);
		Conta cc2 = new ContaCorrente(654, 3561465);
		
		list.add(cc1);
		list.add(cc2);
		
		Conta cc3 = new ContaCorrente(654, 3561465);
		boolean existe = list.contains(cc3);
		System.out.println("Já tenho a conta? " + existe);
		
		for(Conta ref : list) {
			if(ref == cc3) {
				System.out.println("Já possui essa conta");
			}
		}
		
		for(Conta conta : list) {
			System.out.println(conta);
		}
		
	}

}
