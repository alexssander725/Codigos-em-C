#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	int y;
	srand(time(NULL));
	printf("Senhas de atendimento:");

	for(y=0; y < 10; y++)
	{	

		printf ("\tSenhas %d: %d\n", y+1, rand());
				
	}
	printf("\\");
	system ("pause");
	
return 0;
	
}
