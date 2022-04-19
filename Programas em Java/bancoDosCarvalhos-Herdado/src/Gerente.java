
public class Gerente extends Funcionario implements Autenticador{
	
	
	public double getBonificacao() {
		System.out.println("Chamando a bonificacao do Gerente");
		return getSalario();
	}

	private AutenticaUtil autenticador;
	
	@Override
	public boolean autenticar(int senha) {
		return this.autenticador.autenticar(senha);
	}
	
	@Override
	public void setSenha(int senha) {
		this.autenticador.setSenha(senha);
	}
	
	
	public Gerente() {
		this.autenticador = new AutenticaUtil();
	}

		
}
