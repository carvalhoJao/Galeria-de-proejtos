package br.com.bancoDosCarvalhos.banco.teste;

import br.com.bancoDosCarvalhos.banco.modelo.*;

public class TesteTributaveis {
	public static void main(String[] args) {
		ContaCorrente cont1 = new ContaCorrente(222, 4565102);
		cont1.deposita(500);
		
		SeguroDeVida seg = new SeguroDeVida();
		
		CalculadorImposto calc = new CalculadorImposto();
		calc.registra(cont1);
		calc.registra(seg);
		
		System.out.println(calc.getTotalImposto());
	}
}
