package br.com.bancoDosCarvalhos.banco.modelo;

public class ContaCorrente extends Conta implements Tributavel {

	public ContaCorrente(int agencia, int numero) {
		super(agencia, numero);
	}
	
	@Override
	public void sacar(double valor) throws SaldoInsufException {
		double valorSaque = valor + 0.2;
		super.sacar(valorSaque);
	}
	
	@Override
	public void tranferir(double valor, Conta destino) throws SaldoInsufException {
		double valorTrans = valor + 0.2;
		super.tranferir(valorTrans, destino);
	}

	@Override
	public void deposita(double valor) {
		super.saldo += valor;
	}

	@Override
	public double getValorImposto() {
		return super.saldo * 0.01;
	}
	
	
}
