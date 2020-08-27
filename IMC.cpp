#include <stdio.h>
 int main()
 {
 	float imc, altura, peso;
 	
 	printf ("Digite a altura: ");
 	scanf ("%f", &altura);
 	printf ("Digite o peso: ");
 	scanf ("%f", &peso);
 	
 	imc = peso / (altura*altura);
	
	printf ("imc = %.2f", imc);
	
	
	return 0;  
 }
