#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monitori.h"
#include <math.h>

void upis_monitora(Monitor *m)
{
    fflush(stdin);
    printf("Unesite visinu:");
    scanf("%f", &m->visina);
    fflush(stdin);
    printf("Unesite sirinu:");
    scanf("%f", &m->sirina);
    fflush(stdin);
    printf("Unesite proizvodjaca:");
    gets(m->naziv);
    printf("\n");
}

void ispis_monitora(Monitor m)
{
    printf("Naziv: %s\n",m.naziv);
    printf("Sirina: %.2f\n",m.sirina);
    printf("Visina: %.2f\n\n",m.visina);
}

float dijagonala(float sirina, float visina)
{
    return sqrt(pow(sirina,2)+pow(visina,2));
}

float max_dijagonala(Monitor niz[], int n)
{
    int i;
    float d, max = dijagonala(niz[0].sirina, niz[0].visina);

    for ( i = 0; i < n; i++)
    {
        d = dijagonala(niz[i].sirina, niz[i].visina);
        if ( d > max )
        {
            max = d;
        }
    }

    return max;
}

int dijagonala_index(Monitor niz[], int n)
{
    int index = 0;
    int i;
    float d, max = dijagonala(niz[0].sirina, niz[0].visina);

    for(i = 0; i < n; i++)
    {
        d = dijagonala(niz[i].sirina, niz[i].visina);
        if( d > max )
        {
            max = d;
            int index = i;
        }
    }

    return index;
}
