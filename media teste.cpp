#include <stdio.h>
 
int main(){
 
int i, idade, soma, qtdPessoas;
	float media;
	printf("Digite o numero de pessoas \n");
 	scanf("%d",&qtdPessoas);
 	scanf("%d",&idade);
 	
qtdPessoas = 0; 	
soma = 0;
i = 0;
 
while (idade > 0){
	soma += idade;
	soma += qtdPessoas;
	scanf("%d",&idade);
	scanf("%d",&qtdPessoas);
	i++;

	}
media = (float)soma / (float)i;
qtdPessoas = (float)soma / (int)qtdPessoas; 
 
	printf("Media do grupo = %.2f\n",media);
	printf("Quantidade de paessoas = %.2f\n",qtdPessoas);
	
return 0;
}
