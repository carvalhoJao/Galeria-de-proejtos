
public class CriaConta {

	public static void main(String[] args) {
		Conta primeiraConta = new Conta();
		primeiraConta.deposita(200);;
		System.out.println(primeiraConta.getSaldo());
		/*
		Conta segundaConta = new Conta();
		segundaConta.agencia = 410;
		System.out.println(segundaConta.agencia);*/
	}
	
}
