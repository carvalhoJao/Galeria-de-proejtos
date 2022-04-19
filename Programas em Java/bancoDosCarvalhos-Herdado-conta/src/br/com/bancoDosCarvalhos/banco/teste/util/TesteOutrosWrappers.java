package br.com.bancoDosCarvalhos.banco.teste.util;

public class TesteOutrosWrappers {
	public static void main(String[] args) {
		
		Integer idadeRef = Integer.valueOf(45);
		System.out.println(idadeRef.intValue());
		
		Double dRef = Double.valueOf(3.2);
		System.out.println(dRef.doubleValue());
		
		Boolean bRef = Boolean.FALSE;
		System.out.println(bRef.booleanValue());
		
		Number numero = Float.valueOf((29.43f) );
	}
}
