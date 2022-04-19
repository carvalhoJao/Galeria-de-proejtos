package br.com.bancoDosCarvalhos.banco.modelo;

public abstract class Conta extends Object implements Comparable<Conta>{
	protected float saldo;
	private int agencia;
	private int numConta; 
	private Cliente titular;
	private static int totalConta = 1;
	
	
	public abstract void deposita(double valor);
		
	
	public void sacar(double valor) throws SaldoInsufException {
		if (this.saldo < valor) {
			throw new SaldoInsufException("Saldo " + this.saldo + " Valor " + valor);
		}
		this.saldo -= valor;
	}
	public void tranferir(double valor, Conta destino) throws SaldoInsufException {
		this.sacar(valor);
		destino.deposita(valor);
	}
	//Brincando com private
	
	public double getSaldo() {
		return this.saldo;
	}
	
	public int getNumero() {
		return this.numConta;
	}
	
	public void setNumero(int novoNumero){
		this.numConta = novoNumero;
	}
	
	public int getAgencia() {
		return this.agencia;
	}
	
	public void setAgencia(int agencia) {
		this.agencia = agencia;
	}
	
	public void setTitular(Cliente titular) {
		this.titular = titular;
	}
	
	public Cliente getTitular() {
		return titular;
	}
	
	@Override
	public boolean equals(Object outro) {
		Conta ref = (Conta) outro;
		if(this.agencia != ref.agencia) {
			return false;
		}
		
		if(this.numConta != ref.numConta) {
			return false;
		}
		
		return true;
	}
	@Override
	public String toString() {
		return "Numero : " + this.numConta + ", Agencia: " + this.agencia;
		
	}
	
	//Definindo inicialização da classe Conta

	
	public Conta(int agencia, int numero) {
		this.agencia = agencia;
		this.numConta = numero;
		System.out.println("Criando conta numero: " + this.numConta);
		totalConta++;
	}
	
	
	public static int getTotalConta() {
		return totalConta;
	}
	
	@Override
	public int compareTo(Conta o) {
		return Double.compare(this.saldo, o.saldo);
	}
}