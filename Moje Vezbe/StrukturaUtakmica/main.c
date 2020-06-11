#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utakmica.h"

int main()
{
    int n = 2;
    Utakmica niz[n];

    upis_utakmica(niz,n);
    ispis_utakmica(niz,n);

    printf("Domacin ukupno bodova: %d",bodovi_domacin(niz,n));

    return 0;
}
