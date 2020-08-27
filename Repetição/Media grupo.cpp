#include <stdio.h>
 
int main(){
 
int qtdPessoas, idade, soma;
	float media;
 	scanf("%d",&idade);	

soma = 0;
qtdPessoas = 0;
 
while (idade > 0){
	scanf("%d",&idade);
		soma += idade;
			qtdPessoas++;
			
	
	}
media = (float)soma / (float)qtdPessoas;
 
	printf("Media do grupo = %.2f\n",media);
	printf("Qtd = %.2f\n",qtdPessoas);



return 0;
}
