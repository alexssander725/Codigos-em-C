#include <stdio.h>

int main(){

    int vetor[10];
    int i;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("Informe o valor da posicao %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    for(i = 0 ; i < 10 ; i+=2)
    {
        printf("%d - ", vetor[i]);
    }
}
