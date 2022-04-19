
public class TesteFuncionario {

	public static void main(String[] args) {
		
		Funcionario Niko = new Designer();
		Niko.setNome("Niko Belic");
		Niko.setSalario(2000.00);
		Niko.setCPF("456135687");
		
		System.out.println(Niko.getSalario());
		System.out.println(Niko.getBonificacao());
		
	}

}
