
public class TesteGetSet {
	public static void main(String[] args) {
		Conta contaTeste = new Conta(1337, 24446);
		System.out.println(contaTeste.getNumero());
		contaTeste.setNumero(456);
		System.out.println(contaTeste.getNumero());
		
		Cliente Joao = new Cliente();
		Joao.setNome("Joao Pedro Carvalho");
		contaTeste.setTitular(Joao);
		
		System.out.println(contaTeste.getTitular().getNome());
		
	}
}
