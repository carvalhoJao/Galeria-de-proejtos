package br.com.bancoDosCarvalhos.banco.modelo;

public class SaldoInsufException extends Exception{
	public SaldoInsufException(String msg) {
		super(msg);
	}
}
