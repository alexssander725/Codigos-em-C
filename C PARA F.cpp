1#include <stdio.h>
int main()
{ 
float c; float F;
printf("Digite a temperatura em graus Celsius: ");
 scanf("%f",&c);  F = (9*c+160) / 5;
printf("Temperatura em Fahrenheit: %.2f",F);
}

