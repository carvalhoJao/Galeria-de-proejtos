
public class TesteConexao {
	public static void main(String[] args) {
		
		Conexao con = null;
		try {
			con = new Conexao();
			con.leDados();
		} catch(IllegalStateException ex) {
			System.out.println("Erro na conex�o");
		} finally {
			con.fecha();
		}
		
		
	}
}