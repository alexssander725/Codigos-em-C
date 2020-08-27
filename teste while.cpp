#include <stdio.h>

int main(){


	int contador = 1;
	float somatorio = 0;
	float numero = 1;
	float media;
	
	while (numero >= 1) {
		
		printf ("Digite um valor ou 0 para sair:");
		scanf ("%f", &numero);
		
		if (numero>1)
		{
			somatorio = somatorio + numero;
			contador = contador + 1;
		}
		
	} 

	media = (somatorio / contador);
	
		printf ("\n Numeros digitados %d: ", contador);
		printf ("\n A soma sera %.2f: ", somatorio);
		printf ("\n A madia sera %.2f: ", media);

	return 0;
}
