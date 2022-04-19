#include <stdio.h>
#include <unistd.h>
int
main ()
{
  int prod, escolha_saida, qtde1, qtde2, qtde3, qtde4, qtde5, qtde6, p1, p2,
    p3, p4, p5, p6;
  float preco, n1 = 21.80, n2 = 19.90, n3 = 7.49, n4 = 10.50, n5 = 42.45, n6 =
    10.50;

inicio:
  printf
    ("Bem-vindo ao sistema de auto-atendimento da Space-Xis, digite o codigo do produto para seleciona-lo\n\n");
menu:
  while (escolha_saida != 1)   //Enquanto o usuario nao escolher sair o menu continua rodando
    {
      printf ("\n     Produto               Preco\n\n");
      printf (" 200 - UFO X                R$ %.2f  NOVIDADE!!\n", n1);
      printf (" 312 - COWow burguer        R$ %.2f\n", n2);
      printf (" 402 - Atomic mini          R$  %.2f\n", n3);
      printf (" 514 - Alien Juice limao    R$ %.2f\n", n4);
      printf (" 666 - Alien Demo-burguer   R$ %.2f\n", n5);
      printf (" 740 - Alien Juice morango  R$ %.2f\n", n6);
      printf ("Selecao : ");
      scanf ("%d", &prod);
      printf ("\n\n");

      switch (prod)  //Cada Case vai para um lanche ou bebida especifica
	{
	case 200:
	  printf ("Quantas unidades de UFO X voce quer? ");
	  scanf ("%d", &qtde1);
	  preco = preco + (n1 * qtde1); //Adiciona o produto atual ao preço caso esse ja tenha sido descrito
	  p1 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidade(s)\n",
	     p1, qtde1);
	  if (p2 == 312)  //Testa se os produtos abaixo ja haviam sido selecionados
	    {
	      printf (" %d - x %d quantidades\n", p2, qtde2);
	    }
	  if (p3 == 402)
	    {
	      printf (" %d - x %d quantidades\n", p3, qtde3);
	    }
	  if (p4 == 514)
	    {
	      printf (" %d - x %d quantidades\n", p4, qtde4);
	    }
	  if (p5 == 666)
	    {
	      printf (" %d - x %d quantidades\n", p5, qtde5);
	    }
	  if (p6 == 740)
	    {
	      printf (" %d - x %d quantidades\n", p6, qtde6);
	    }
	  printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;  //Volta para o menu caso o usuario queira escolher mais um produto
	case 312:
	  printf ("Quantas unidades de COWow burguer voce quer? ");
	  scanf ("%d", &qtde2);
	  preco = preco + (n2 * qtde2);
	  p2 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidades\n",
	     p2, qtde2);
	  if (p1 == 200)
	    {
	      printf (" %d - x %d quantidades\n", p1, qtde1);
	    }
	  if (p3 == 402)
	    {
	      printf (" %d - x %d quantidades\n", p3, qtde3);
	    }
	  if (p4 == 514)
	    {
	      printf (" %d - x %d quantidades\n", p4, qtde4);
	    }
	  if (p5 == 666)
	    {
	      printf (" %d - x %d quantidades\n", p5, qtde5);
	    }
	  if (p6 == 740)
	    {
	      printf (" %d - x %d quantidades\n", p6, qtde6);
	    }
	  printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;
	case 402:
	  printf ("Quantas unidades de Atomic mini voce quer? ");
	  scanf ("%d", &qtde3);
	  preco = preco + (n3 * qtde3);
	  p3 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidade(s)\n",
	     p3, qtde3);
	  if (p1 == 200)
	    {
	      printf (" %d - x %d quantidades\n", p1, qtde1);
	    }
	  if (p2 == 312)
	    {
	      printf (" %d - x %d quantidades\n", p2, qtde2);
	    }
	  if (p4 == 514)
	    {
	      printf (" %d - x %d quantidades\n", p4, qtde4);
	    }
	  if (p5 == 666)
	    {
	      printf (" %d - x %d quantidades\n", p5, qtde5);
	    }
	  if (p6 == 740)
	    {
	      printf (" %d - x %d quantidades\n", p6, qtde6);
	    }
	  printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;
	case 514:
	  printf ("Quantas unidades de Alien Juice limao voce quer? ");
	  scanf ("%d", &qtde4);
	  preco = preco + (n4 * qtde4);
	  p4 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidade(s)\n",
	     p4, qtde4);
	  if (p1 == 200)
	    {
	      printf (" %d - x %d quantidades\n", p1, qtde1);
	    }
	  if (p3 == 402)
	    {
	      printf (" %d - x %d quantidades\n", p3, qtde3);
	    }
	  if (p2 == 312)
	    {
	      printf (" %d - x %d quantidades\n", p2, qtde2);
	    }
	  if (p5 == 666)
	    {
	      printf (" %d - x %d quantidades\n", p5, qtde5);
	    }
	  if (p6 == 740)
	    {
	      printf (" %d - x %d quantidades\n", p6, qtde6);
	    }
	  printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;
	case 666:
	  printf ("Quantas unidades de Alien Demo-burguer voce quer? ");
	  scanf ("%d", &qtde5);
	  preco = preco + (n5 * qtde5);
	  p5 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidade(s)\n",
	     p5, qtde5);
	  if (p1 == 200)
	    {
	      printf (" %d - x %d quantidades\n", p1, qtde1);
	    }
	  if (p3 == 402)
	    {
	      printf (" %d - x %d quantidades\n", p3, qtde3);
	    }
	  if (p4 == 514)
	    {
	      printf (" %d - x %d quantidades\n", p4, qtde4);
	    }
	  if (p2 == 312)
	    {
	      printf (" %d - x %d quantidades\n", p2, qtde2);
	    }
	  if (p6 == 740)
	    {
	      printf (" %d - x %d quantidades\n", p6, qtde6);
	    }
	    printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;
	case 740:
	  printf ("Quantas unidades de Alien Juice morango voce quer? ");
	  scanf ("%d", &qtde6);
	  preco = preco + (n6 * qtde6);
	  p6 = prod;
	  printf
	    ("\nVoce selecionou os determinados itens:\n %d - x %d quantidade(s)\n",
	     p6, qtde6);
	  if (p1 == 200)
	    {
	      printf (" %d - x %d quantidades\n", p1, qtde1);
	    }
	  if (p3 == 402)
	    {
	      printf (" %d - x %d quantidades\n", p3, qtde3);
	    }
	  if (p4 == 514)
	    {
	      printf (" %d - x %d quantidades\n", p4, qtde4);
	    }
	  if (p2 == 312)
	    {
	      printf (" %d - x %d quantidades\n", p2, qtde2);
	    }
	  if (p5 == 666)
	    {
	      printf (" %d - x %d quantidades\n", p5, qtde5);
	    }
	  printf
	    ("Sua compra deu o total de R$ %.2f .\nDigite 1 para seguir ao pagamento ou qualquer outro numero para continuar comprando : ",
	     preco);
	  scanf ("%d", &escolha_saida);
	  goto menu;
	}
    }
  preco = 0;   //Zera todas as variaveis para que o sistema reinicie corretamente para outro usuario
  escolha_saida = 0;
  qtde1 = 0;
  qtde2 = 0;
  qtde3 = 0;
  qtde4 = 0;
  qtde5 = 0;
  qtde6 = 0;
  p1 = 0;
  p2 = 0;
  p3 = 0;
  p4 = 0;
  p5 = 0;
  p6 = 0;

  printf
    ("\nAgradecemos por comprar conosco, volte sempre! \nReiniciando o sistema em 5...4...3...\n\n");
  sleep (4);   //Espera o usuario se dar conta que finalizou a sessao
  goto inicio;
}


