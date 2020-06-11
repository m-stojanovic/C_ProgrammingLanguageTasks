#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kandidati.h"

int main()
{
    int i;
    Kandidat niz[3];

    for(i = 0; i < 3; i++)
    {
        upis_kandidata(&niz[i]);
    }

    for(i = 0; i < 3; i++)
    {
        ispis_kandidata(niz[i]);
    }

    printf("Ukupan broj kandidata za master studije: %d",master_studije(niz,3));

    return 0;
}
