#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "racuni.h"

int main()
{
    int n = 2;
    int i;
    Racun niz[n];

    for(i = 0; i < n; i++)
    {
        upis_racuna(&niz[i]);
    }

    for(i = 0; i < n; i++)
    {
        ispis_racuna(niz[i]);
    }

    printf("Ukupna suma negativnih iznosa racuna: %d",ukupno_zaduzenje(niz,n));

    return 0;
}
