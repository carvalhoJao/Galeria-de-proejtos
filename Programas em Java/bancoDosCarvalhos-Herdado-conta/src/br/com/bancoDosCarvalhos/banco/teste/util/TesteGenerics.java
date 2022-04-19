package br.com.bancoDosCarvalhos.banco.teste.util;

import java.util.ArrayList;
import java.util.Collection;

import br.com.bancoDosCarvalhos.banco.modelo.Conta;
import br.com.bancoDosCarvalhos.banco.modelo.ContaCorrente;

public class TesteGenerics {
	public static void main(String[] args) {
		
		Collection<Conta> list = new ArrayList<Conta>();
		
		Conta cc1 = new ContaCorrente(561, 251);
		Conta cc2 = new ContaCorrente(654, 3561465);
		
		list.add(cc1);
		list.add(cc2);
		
		System.out.println("Tamanho: " + list.size());
		
		list.remove(0);
		
		Conta cc3 = new ContaCorrente(65, 654);
		Conta cc4 = new ContaCorrente(65, 4568);
		
		list.add(cc3);
		list.add(cc4);
		
		for(int i = 0; i < list.size(); i++) {
			Object oRef = ((ArrayList<Conta>) list).get(i);
			System.out.println(oRef);
		}
		
//		for(Conta oRef : list) {
//            System.out.println(oRef);
//        }
		
		System.out.println("Tamanho: " + list.size());
		
		
	}
		
	
}
