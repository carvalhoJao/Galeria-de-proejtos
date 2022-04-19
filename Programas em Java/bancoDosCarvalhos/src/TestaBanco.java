
public class TestaBanco {
	public static void main(String[] args) {
		Cliente Joao = new Cliente();
		Joao.CPF = "43644859850";
		Joao.nome = "Joao Pedro Carvalho";
		Joao.profissao = "Intern";
		
		Conta contaDoJoao = new Conta();
		contaDoJoao.deposita(100);
		
		contaDoJoao.titular = Joao;
		System.out.println(contaDoJoao.titular.nome);
	}
}
