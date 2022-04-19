
public class Sistema_Interno {
	private int senha = 220;
	
	public void autentica(Autenticador fa) {
		boolean autenticou = fa.autenticar(this.senha);
		if(autenticou) {
			System.out.println("Entrando no sistema");
		}
		else {
			System.out.println("Senha incorreta!");
		}
		
	}
}
