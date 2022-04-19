
public class Cliente implements Autenticador {
	
	private AutenticaUtil autenticador;
	
	@Override
	public boolean autenticar(int senha) {
		return this.autenticador.autenticar(senha);
	}
	
	@Override
	public void setSenha(int senha) {
		this.autenticador.setSenha(senha);
	}
	
	
	public Cliente() {
		this.autenticador = new AutenticaUtil();
	}


}
