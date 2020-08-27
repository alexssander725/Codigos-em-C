#include <stdio.h>


int soma (int a, int b){
	return a+b;
}

int sub (int a, int b){
	return a-b;
}

int mult (int a, int b){
	return a*b;
}

int div (int a, int b){
	return a/b;
}

int main (int a, int b ){
	
	int x,y,op;
	
	do{
		
		printf("Digite 1 para Soma / 2 Subtraçao / 3 multiplicaçao / 4 Divisao / 5 - Sair: \n");
		scanf("%d",&op);
		printf("Digite o valor a:");
		scanf("%d",&a);
		printf("Digite o valor b:");
		scanf("%d",&b);
		
				if (op==1){
				
					printf("A soma sera: %d\n", soma (a,b));
				}if (op==2){
					printf("A subtraçao sera: %d\n", sub (a,b));
				}if (op==3){
				printf("A multiplicaçao sera: %d\n", mult (a,b));
				}if (op==4){
					if (b==0){
						printf("Nao sera possivel fazer essa divisao !\n");
					}else{
					printf("A divisao sera: %d\n", div (a,b));
					}
				}		
							
			}while(op !=5);
		
	return 0;
}
