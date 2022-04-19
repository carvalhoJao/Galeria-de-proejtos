
public class Administrador extends Funcionario implements Autenticador{

	
	@Override
	public double getBonificacao() {
		return 70;
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
	
	
	public Administrador() {
		this.autenticador = new AutenticaUtil();
	}

	
}
