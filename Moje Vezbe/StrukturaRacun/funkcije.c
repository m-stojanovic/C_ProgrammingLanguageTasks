#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "racuni.h"

void upis_racuna(Racun *r)
{
    printf("Puno ime: ");
    gets(r->naziv);
    printf("Stanje racuna: ");
    scanf("%f",&r->iznos_racuna);
    getchar();
    printf("\n");
}

void ispis_racuna(Racun r)
{
    printf("Puno ime: %s\n",r.naziv);
    printf("Stanje racuna: %.2f\n\n",r.iznos_racuna);
}

int ukupno_zaduzenje(Racun niz[], int n)
{
    int i;
    int suma = 0;

    for(i = 0; i < n; i++)
    {
        if(niz[i].iznos_racuna < 0)
        {
            suma = suma + niz[i].iznos_racuna;
        }
    }

    return suma;
}
