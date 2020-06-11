#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "izvestaj.h"

int main()
{
    int i;
    Izvestaj niz[5];

    for(i = 0; i < 5; i++)
    {
        upisivanjeIzvestaja(&niz[i]);
    }

    for(i = 0; i < 5; i++)
    {
        ispisavanjeIzvestaja(&niz[i]);
    }

    printf("Prosecna temperatura jeste: %.2f",prosecnaTemperatura(niz,5)); // 5 je zadata duzina za n u funkcije.c

    return 0;
}
