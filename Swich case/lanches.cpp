#include <stdio.h>
#include <locale.h> 


main (){
	
	setlocale(LC_ALL,NULL);
	int cod;
	float qtd, result;
	printf ("Digite o cod do pedido:  \n");
	scanf ("%d", &cod);
	printf ("Quantidade: \n");
	scanf ("%f", &qtd);
	
	switch (cod){
		
		case 100:
			 printf ("Cachorro quente = %.2f\n", qtd*11,90);
			break;
		case 101:
			 printf ("Bauru simples = %.2f\n", qtd*15,90);
			break;
		case 102:
			 printf ("Bauru com ovo = %.2f\n", qtd*14,90);
			break; 
		case 103:
			 printf ("Hamburguer = %.2f\n", qtd*17,90);
			break;
		case 104:
			 printf ("Cheeseburguer = %.2f\n", qtd*18,90);
			break;
		case 105:
			 printf ("Refrigerante = %.2f\n", qtd*5,90);
			break;
		default:
			printf ("Valor invalido \n");	 
		
	}
}
