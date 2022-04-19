
public class TesteGerente {

	public static void main(String[] args) {
		Gerente g1 = new Gerente();
		g1.setNome("Roberson da Silva");
		g1.setCPF("56165465120");
		g1.setSalario(5000);
		
		System.out.println(g1.getNome());
		System.out.println(g1.getSalario());
		
		g1.setSenha(5520);
		
		boolean teste = g1.autenticar(5520);
		System.out.println(teste);
		System.out.println(g1.getBonificacao());
	}

}
