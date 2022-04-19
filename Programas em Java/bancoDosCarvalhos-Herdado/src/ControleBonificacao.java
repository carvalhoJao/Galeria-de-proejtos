 
public class ControleBonificacao {

	private double soma;
	
//	public void registraFunc(Gerente g) {
//		double boni = g.getBonificacao();
//		this.soma += boni;
//	}
	
	public void registraFunc(Funcionario f) {
		double boni = f.getBonificacao();
		this.soma += boni;
	}
	
//	public void registraFunc(EditorVideo e) {
//		double boni = e.getBonificacao();
//		this.soma += boni;
//	}
	
	public double getSoma() {
		return soma;
	}

	


}
