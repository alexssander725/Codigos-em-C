#include <stdio.h>
#include <locale.h> 

main(){
	
	setlocale(LC_ALL,NULL);
	int mes;
    printf("Digite um mes : \n");
    scanf("%d", &mes);

 
	 switch (mes){
		
		case 1:
			 printf("Alta temporada \n");
			break;
		case 2:
			 printf("Alta temporada \n");
			break;
		case 3:
		case 4:
		case 5:
			 printf("Baixa temporada\n");
			break;
		case 6:
		case 7:
			 printf("Alta temporada \n");
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			 printf("Baixa temporada \n");
			break;
		case 12:
			 printf("Alta temporada\n");
			break;
		default:
			printf ("Mes não valida", mes);
			break;
		
	}
	
	
}
