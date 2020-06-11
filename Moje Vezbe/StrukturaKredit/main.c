#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kredit.h"

int main()
{
    int n = 2;
    int i;
    Kredit niz[n];

    for(i = 0; i < n; i++)
    {
        upis_kredita(&niz[i]);
    }
    for(i = 0; i < n; i++)
    {
        ispis_kredita(niz[i]);
        printf("Mesecna rata: %d\n\n",niz[i].iznos / niz[i].rata);
    }

    printf("Najveca mesecan rata: %d\n",najveca_mesecna_rata(niz,n));

    return 0;
}
