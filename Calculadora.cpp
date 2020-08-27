#include <stdio.h>
#include <math.h>
#include <locale.h> 


int main(){
	
	setlocale(LC_ALL,NULL);
	char op;
	float num1, num2, result;
	printf("Calculadora\n");
    printf("Digite um numero / operador / numero: ");
    scanf("%f%c%f", &num1, &op, &num2);
	 
	 switch (op){
		
		case '+':
			 printf("\n = %.2f\n", num1+num2);
			break;
		case '-':
			 printf("\n = %.2f\n", num1-num2);
			break;
		case '/':
		     printf("\n = %.2f\n", num1/num2);
			break;
		case '*':
		     printf("\n = %.2f\n", num1*num2);
			break; 		
		default:
			printf ("Operador invalido \n");
	printf ("Resultado = %.2f \n " , result);
		
	}
	
}
