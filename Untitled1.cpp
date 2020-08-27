#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
	char Nome[30];
	char Sexo;
	int Faltas;
	float Media;
};

int main() {
	struct aluno al;
	al.Faltas=30;
	strcpy(al.Nome, "Carlos Oliveira");
	al.Sexo='M';
	printf("nome: ");
	scanf("%d", &Nome);
	printf("sexo: ");
	printf("faltas: ");
	printf("media: ");
	scanf("%d %s %c %2f. \n",al.faltas , al.nome, al.sexo, al.media);
    
    
	return 0;
}
	
	
