package br.com.bancoDosCarvalhos.banco.teste.util;

import java.util.ArrayList;
import java.util.List;

public class TesteWrapperInt {
	public static void main(String[] args) {
		
		int[] idades = new int[5];
		String[] nomes = new String[5];
		
		int idade = 65;
//		Integer idadeRef = new Integer(45);
		Integer idadeRef = Integer.valueOf(45);
		
		List<Integer> numeros = new ArrayList<Integer>();
		numeros.add(idadeRef);
		
		System.out.println(numeros.get(0));
	}
}
