#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "osoba.h"

int main()
{
    int i;
    Osobe niz[5];

    for(i = 0; i < 2; i++)
    {
      upisivanjeOsoba(&niz[i]);
    }

    for(i = 0; i < 2; i++)
    {
        printf("Osoba: %d: \n",i + 1);
        ispisivanjeOsoba(&niz[i]);
    }

    printf("Najmanji body mass od svih osoba je: %.2f\n",MinBMI(niz,2));
    printf("Osoba sa najmanje BMI: \n");
    ispisivanjeOsoba(&niz[IndexBMI(niz,2)]);

    return 0;
}
