
public class TesteSacaNegativa {
	 public static void main(String[] args) {
		Conta contaTeste = new Conta();
		contaTeste.deposita(100);
		contaTeste.saca(200);
		System.out.println(contaTeste.getSaldo()); 
	}
}
