package br.com.bancoDosCarvalhos.banco.modelo;

public class SeguroDeVida implements Tributavel {

	@Override
	public double getValorImposto() {
		return 42;
	}
	
}
