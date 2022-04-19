public class Conta{
	private float saldo;
	int agencia;
	int numero; 
	Cliente titular;
	
	public void deposita(double valor) {
		this.saldo += valor;
	}
	
	public boolean saca(double valor) {
		if (this.saldo >= valor) {
			this.saldo -= valor; 
			return true;
		}
		else {
			return false;
		}
	}
	
	public boolean tranferir(double valor, Conta destino) {
		if (this.saldo >= valor) {
			this.saldo -= valor;
			destino.deposita(valor);
			return true;
		}
		else {
			return false;
		}
	}
	
	public double getSaldo() {
		return this.saldo;
	}
}