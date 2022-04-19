public class Conta{
	private float saldo;
	private int agencia;
	private int numConta; 
	private Cliente titular;
	private static int totalConta = 1;
	
	
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
	
	//Definindo inicialização da classe Conta
	
	public Conta(int agencia, int numero) {
		this.agencia = agencia;
		this.numConta = numero;
		System.out.println("Criando conta numero: " + this.numConta);
		totalConta++;
	}
	
	//Static
	
	public static int getTotalConta() {
		return totalConta;
	}
}