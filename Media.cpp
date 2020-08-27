#include <stdio.h>

int main()
{
    int n;

    printf("digite o numero:");
    scanf("%d",&n);

    if(n < 30 )
        printf("Reporvado: %d");
    else
    if(n < 70 )
        printf("Exame: %d");
    else
    if(n < 100 )
    	printf("Aprovado: %d");
    	   	
    
	return 0;
}
