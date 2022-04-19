
public class TestaMetodo {
	public static void main(String[] args) {
		Conta novaConta = new Conta();
		novaConta.deposita(50);
		
		System.out.println(novaConta.getSaldo());

		//Hora de sacar
		novaConta.saca(20);
		System.out.println(novaConta.getSaldo());
		boolean sacarDeuCerto = novaConta.saca(10);
		System.out.println(novaConta.getSaldo()+ " " + sacarDeuCerto);
	
		Conta minhaConta = new Conta();
		minhaConta.deposita(1000);
		System.out.println("minha conta possui: " + minhaConta.getSaldo());
		
		boolean checkTransfer = minhaConta.tranferir(1200, novaConta);
		System.out.println("A nova conta agora possui: " + novaConta.getSaldo() + checkTransfer);
		System.out.println("A minha conta agora possui: " + minhaConta.getSaldo());
		
	}
}
