#include <stdio.h>
#include <math.h>

int main(){
	
	int b, e, n, num=1;
	printf ("Digite o numero b \n");
	scanf ("%d", &b);
	printf ("Digite o numero n \n"),
	scanf ("%d", &n);
	
	while(num<=n){
		e=pow(b,num) + e;
		num++;
		
	}
	printf("e = %d",e);
	
}
