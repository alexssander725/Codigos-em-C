# include <stdio.h>

int main(){
	
    float media[3] = {0}, valorLido;
    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        printf("Informe o valor: ");
        scanf("%f", &valorLido);

        media[0] += valorLido;
    }

    for(i = 0 ; i < 5 ; i++)
    {
        printf("Informe o valor: ");
        scanf("%f", &valorLido);

        media[1] += valorLido;
    }

    for(i = 0 ; i < 5 ; i++)
    {
        printf("Informe o valor: ");
        scanf("%f", &valorLido);

        media[2] += valorLido;
    }

    printf("A media 1 eh: %f.", media[0] / 5);
    printf("A media 2 eh: %f.", media[1] / 5);
    printf("A media 3 eh: %f.", media[2] / 5);
}
