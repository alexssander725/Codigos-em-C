#include <stdio.h>


int main()
{
      char nome[100];
      char idade[100];
      
      printf("Digite seu nome:\n");
      scanf("%s", nome);
      printf("Digite sua idade:\n");
      scanf("%s", idade);
      printf("Seu nome é: %s %s\n", nome, idade);
      
      return 0;
}
