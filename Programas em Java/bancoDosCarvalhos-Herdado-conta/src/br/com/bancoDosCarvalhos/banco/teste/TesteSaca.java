package br.com.bancoDosCarvalhos.banco.teste;

import br.com.bancoDosCarvalhos.banco.modelo.*;

public class TesteSaca {

	public static void main(String[] args) {
		Conta teste = new ContaCorrente(250, 5646320);
		
		teste.deposita(200);
		try {
			teste.sacar(350);
		} catch (SaldoInsufException e) {
			e.printStackTrace();
		}
		
		
	}
}
