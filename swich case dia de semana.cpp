#include <stdio.h>
#include <locale.h> 

main(){
	
	setlocale(LC_ALL,NULL);
	int dia;
    printf("Digite um dia : \n");
    scanf("%d", &dia);

 
	 switch (dia){
		
		case 1:
			 printf("Dia de semana\n");
			break;
		case 2:
			 printf("DDia de semana \n");
			break;
		case 3:
		     printf("Dia de semana\n");
			break;
		case 4:
		     printf("Dia de semana\n");
			break;
		case 5:
			 printf("Dia de semana\n");
			break;
		case 6:
			 printf("Final de semana\n");	 	 	
			break;
		case 7:
			 printf("Final de semana\n");
			break;
		default:
			printf ("opçao não valida", dia);
			break;
		
	}
	
	
}
