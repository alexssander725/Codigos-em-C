#include<stdio.h>

int main()
{
    int a, b, c;

    printf("digite o primeiro numero:");
    scanf("%d",&a);
    printf("digite o segundo numero:");
    scanf("%d",&b);
	printf("digite o terceiro numero:");
	scanf("%d",&c);
	
    if(a < b && a < b)
        printf("%d", a);
    else
    if(b < a && b < a)
        printf("%d", b);
    else
    if(c < b && c < b)
    	printf("%d", c);
}
