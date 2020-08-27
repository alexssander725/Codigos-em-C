#include <stdio.h>
#include <stdlib.h>


float media (float num1, float num2, float num3, char op){
	if (op == 'a'){
	return (num1 + num2 + num3) / 3;
	}else if (op == 'p'){
	return ( num1*5 + num2*3 + num3*2) / 10;
	}
}

int main (){
	
	float nota1, nota2, nota3, result;
	char op;
	
	printf("Digite a opçao A para media aritimetica ou P para ponderada: \n");
	scanf("%c", &op);
	printf("Digite as notas: \n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	result = media (nota1, nota2, nota3, op);
	
	printf("Media = %.2f", result);
	
	return 0;
	
}
