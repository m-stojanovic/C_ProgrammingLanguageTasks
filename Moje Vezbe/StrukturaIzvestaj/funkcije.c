#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "izvestaj.h"

void upisivanjeIzvestaja(Izvestaj *str)
{
        fflush(stdin);
        printf("Naziv grada: ");
        gets(str->grad);
        printf("Temperatura: ");
        scanf("%f",&str->temperatura);
        getchar();
        printf("\n");

}

void ispisavanjeIzvestaja(Izvestaj *str)
{
        printf("Grad: %s\n",str->grad);
        printf("Temperatura: %.2f\n",str->temperatura);
}

float prosecnaTemperatura(Izvestaj niz[100], int n)
{
    float suma;
    int i;

    for ( i = 0; i < n; i++)
    {
        suma = suma + niz[i].temperatura;
    }

    return suma / n;
}
