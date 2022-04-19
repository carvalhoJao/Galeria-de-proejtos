
public class TestaStatic {
	public static void main(String[] args) {
		Conta conta2 = new Conta(458, 55621);
		Conta conta3 = new Conta(458, 453);
		Conta conta4 = new Conta(458, 559875);
		
		System.out.println("O Total de contas é " + Conta.getTotalConta());
	}
}
