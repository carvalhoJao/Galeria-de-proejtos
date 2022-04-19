package br.com.alura.bancoDosCorno;

import br.com.bancoDosCorno.banco.modelo.Conta;
import br.com.bancoDosCorno.banco.modelo.ContaCorrente;

public class TesteBiblioteca {

	public static void main(String[] args) {
		Conta test = new ContaCorrente(1561, 516500);
		
		test.deposita(500);
		
		System.out.println(test.getSaldo());

		String nome = "ALURA";
		CharSequence cs = new StringBuilder("al");

		nome = nome.replace("AL", cs);

		System.out.println(nome);
	}
}
