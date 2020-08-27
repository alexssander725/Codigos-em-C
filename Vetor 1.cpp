#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void aloca (int tam){
	
	int *vet;
	vet = (int*)malloc(sizeof(int)*tam);
	for (int i=0; i<tam; i++)
	{	
	  	printf ("informe o valor: ");
		scanf ("%d",&vet[i]);
    }
	for (int i=0; i<tam; i++)
		printf ("\no valor eh: %d",vet[i]);
}
int main (){
	
	int tam;
	printf ("informe o tamanho do vetor: ");
	scanf ("%d", &tam);
	aloca (tam);

    getch();
 	return 0;   
}

