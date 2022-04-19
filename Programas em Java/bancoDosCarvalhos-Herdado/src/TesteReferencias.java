
public class TesteReferencias {

	public static void main(String[] args) {
		Gerente g2 = new Gerente();
		g2.setNome("Carlos");
		String nome = g2.getNome();
		g2.setSalario(5000);
		
		
		EditorVideo edit1 = new EditorVideo();
		edit1.setSalario(2500);
		
		Designer Jeferson = new Designer();
		Jeferson.setSalario(2320);
		
		System.out.println(nome);
		ControleBonificacao controle = new ControleBonificacao();
		controle.registraFunc(g2);
		controle.registraFunc(edit1);
		controle.registraFunc(Jeferson);
		
		System.out.println(controle.getSoma());
	}

}
