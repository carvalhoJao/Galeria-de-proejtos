package br.com.bancoDosCarvalhos.banco.teste;

public class TesteArrayPrimitivos  {
	public static void main(String[] args) {
		
		int[] idades = new int[7];
		
		int idade1 = 29;
		int idade2 = 30;
		int idade3 = 31;
		int idade4 = 43;
		int idade5 = 21;
		int idade6 = 43;
		int idade7 = 54;
		
		idades[1] = idade1;
		try {
			System.out.println(idades[1]);
		} catch(ArrayIndexOutOfBoundsException ex){
			System.out.println("Casa não existe");
		}
	}
}
