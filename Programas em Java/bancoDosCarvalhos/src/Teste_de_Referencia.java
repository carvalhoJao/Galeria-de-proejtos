
public class Teste_de_Referencia {
	public static void main(String[] args) {
		Conta primeiraConta = new Conta();
		primeiraConta.deposita(300);
		
		System.out.println("saldo da primeira: " + primeiraConta.getSaldo());
		
		Conta segundaConta = primeiraConta;
		
		System.out.println("Saldo da segunda conta: " + segundaConta.getSaldo());
		segundaConta.deposita(300);
		System.out.println("saldo da segunda conta somado: " + segundaConta.getSaldo());
	
		//Hora de sacar
		segundaConta.saca(20);
		System.out.println(segundaConta.getSaldo());
	}
}
