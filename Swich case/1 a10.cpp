#include <stdio.h>
#include <locale.h> 

main(){
	
	setlocale(LC_ALL,NULL);
	int num;
    printf("Digite um número de 1 a ate 10: \n");
    scanf("%d", &num);

 
	 switch (num){
		
		case 1:
			 printf("Um \n");
			break;
		case 2:
			 printf("Dois \n");
			break;
		case 3:
		     printf("Tres \n");
			break;
		case 4:
		     printf("Quatro \n");
			break;
		case 5:
			 printf("Cinco \n");
			break;
		case 6:
			 printf("Seis \n");	 	 	
			break;
		case 7:
			 printf("Sete \n");
			break;
		case 8:
			 printf("Oito \n");
			break;
		case 9:
			 printf("Nove \n");
			break;
		case 10:
			 printf("Dez \n");
			break;	 	 	 		
		default:
			printf ("opçao não valida", num);
			break;
		
	}
	
	
}
