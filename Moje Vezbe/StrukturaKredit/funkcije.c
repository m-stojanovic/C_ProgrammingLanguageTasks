#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kredit.h"

void upis_kredita(Kredit *k)
{
    printf("Broj rata: ");
    scanf("%d",&k->rata);
    printf("Iznos: ");
    scanf("%d",&k->iznos);
    printf("\n");
}

void ispis_kredita(Kredit k)
{
    printf("Broj rata: %d\n",k.rata);
    printf("Iznos: %d\n",k.iznos);
}

int najveca_mesecna_rata(Kredit niz[], int n)
{
    int i;
    int rata;
    int max = 0;

    for(i = 0; i < n; i++)
    {
        rata = niz[i].iznos / niz[i].rata; // onda bez ovog sa komentarima
        if(rata > max) // ili niz[i].iznos / niz[i].rata;
        {
            max = rata; // ili niz[i].iznos / niz[i].rata;
        }
    }

    return max;
}
