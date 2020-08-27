#include <stdio.h>
#include <stdlib.h> 

int main() {
	
  int b=0, a=0, area=0;

 {
     printf("Informe a base do triângulo: ");
     scanf("%d", &b);
     printf("Informe a altura do triângulo: ");
     scanf("%d", &a);

do{

     if (b >= 0 || a >= 0) {
         printf("\nENTRADA INVÁLIDA!\n\n");
     }
  } while(b >= 0 || a >= 0);

  area = (b * a)/2;

  printf("\n area do triângulo: %d.2f", area);

 system("PAUSE");
 return 0;
}
}

