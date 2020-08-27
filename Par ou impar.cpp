#include <stdio.h>

int main()
{
    int n, divisao;
    printf("Digite um numero: ");
    scanf("%d", &n);
    divisao=n/2;
    if (n==divisao*2)
    {
	
        printf("numero par");
    }
    else 
    {
        printf("numero impar");
    }
}
