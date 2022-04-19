
public class Teste_Sist_Int {
	public static void main(String[] args) {
		Gerente g1 = new Gerente();
		Administrador adm = new Administrador();
		
		Sistema_Interno sist1 = new Sistema_Interno();
		
		g1.setSenha(220);
		adm.setSenha(2256);
		
		sist1.autentica(g1);
		sist1.autentica(adm);		
		
		Cliente cli1 = new Cliente();
		cli1.setSenha(220);
		
		sist1.autentica(cli1);
		
	}
}
