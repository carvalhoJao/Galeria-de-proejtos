package br.com.bancoDosCarvalhos.banco.modelo;

public class GuardadorArray {
	
	public Conta[] referencias;
	private int contadorDeContas = 0;
	
	
	public GuardadorArray() {
		this.referencias = new Conta[10];
	}
	
	public void adiciona(Conta ref) {
		this.referencias[contadorDeContas] = ref;
		contadorDeContas++;
	}
	
	public int getContadorDeContas() {
		return contadorDeContas;
	}
	
}
