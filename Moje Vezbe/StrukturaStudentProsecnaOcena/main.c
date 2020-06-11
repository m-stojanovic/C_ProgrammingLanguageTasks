#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studenti.h"

int main()
{
    int i;
    int n = 2;
    Student niz[n];

    for(i = 0; i < n; i++)
    {
        upis_studenata(&niz[i]);
    }

    for(i = 0; i < n; i++)
    {
        ispis_studenata(niz[i]);
    }

    printf("Najveca prosecna ocena jeste: %.2f",najveca_prosecna_ocena(niz,n));

    return 0;
}
