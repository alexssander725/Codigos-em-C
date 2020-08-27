#include <stdio.h>


int idade(int a){
	return a;
}

int main (int a){
	
	int x;
	
	do{
	
	
		
		printf("Digite a idade ou 0 para sair : \n");
		scanf("%d",&a);
		
				if (a < 18){
					printf("Menor de idade \n");
				}
				else if (a >= 18){
					printf("Maior de idade \n");
				}

							
			}while(a !=0);
		
	return 0;
}
