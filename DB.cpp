#include <stdio.h>
#include <conio.h>

int main(){
	
	int a,b,num,binario[100];
	
	printf("Insira um numero decimal para converter em binario: ");
	scanf("%d",&num);
	
	for(b=0;b<100;++b)
	{
		binario[b]=num%2;
		num=num/2;
		if(num==0)
		break;
	}
	
	for(a=b;a>=0;--a)
	{
		printf("%d",binario[a]);
	}
	
	getch();
}

