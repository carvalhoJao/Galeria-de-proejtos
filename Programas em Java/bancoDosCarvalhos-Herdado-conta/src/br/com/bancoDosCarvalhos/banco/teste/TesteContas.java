package br.com.bancoDosCarvalhos.banco.teste;

import br.com.bancoDosCarvalhos.banco.modelo.*;

public class TesteContas {
	public static void main(String[] args) {
		ContaCorrente cc = new ContaCorrente(110, 24450);
		cc.deposita(500);
		
		ContaPoupanca cp = new ContaPoupanca(110, 58980);
		cp.deposita(500);
		
		System.out.println(cp.getSaldo());
		try {
			cc.tranferir(750, cp);
		} catch (SaldoInsufException e) {
			e.printStackTrace();
		}
		//cp.tranferir(250, cc);
		
//		cc.sacar(10);
		
		System.out.println("Após transferencia " + cp.getSaldo());
		System.out.println("Conta possui : " + cc.getSaldo());
		
	}
}
