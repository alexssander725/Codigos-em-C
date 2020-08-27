#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


main(){
	
	setlocale(LC_ALL,NULL);
	float salario, result;
	char abc;
	printf("Digite seu salario atual: ");
	scanf("%f %c", &salario, &abc);
					
   	switch (abc){
	   
   	
   		case 'a':
		 	 printf("O novo salario sera de = %.2f", salario*0.10+salario);
     	   break;
		case 'b':
		 	 printf("O novo salario sera de = %.2f", salario*0.15+salario);
    	   break;
		case 'c':
		 	 printf("O novo salario sera de = %.2f", salario*0.20+salario);
	       break;
		default:   	
			printf ("Resultado = %.2f\n", result);
		
	}
   
}
   	
