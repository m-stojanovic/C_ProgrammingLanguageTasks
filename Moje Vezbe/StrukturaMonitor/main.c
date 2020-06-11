#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monitori.h"
#include <math.h>

int main()
{
    int i;
    Monitor niz[2];

    for (i = 0; i < 2; i++) {
        fflush(stdin);
        upis_monitora(&niz[i]);
    }

    for (i = 0; i < 2; i++) {
        ispis_monitora(niz[i]);
    }

    printf("Najveca dijagonala je: %.2f\n", max_dijagonala(niz,2));
    printf("Monitor koji ima najvecu dijagonalu: \n");
    ispis_monitora(niz[dijagonala_index(niz, 2)]);

    return 0;
}
