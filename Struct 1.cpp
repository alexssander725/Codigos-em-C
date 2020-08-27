#include <stdio.h>
#include <stdlib.h>

struct aluno{
	char nome[30];
	float media;
	int faltas;
	
};
int main()
{
	struct aluno al[30];
	
		printf("Digite o nome: ");
		scanf("%d",al[0].nome);
		printf("nome digitado: %d\n", al[0].nome);
	
	return 0;
}
