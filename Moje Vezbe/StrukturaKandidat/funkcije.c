#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kandidati.h"

void upis_kandidata(Kandidat *k)
{
    printf("Ime: ");
    gets(k->ime);
    printf("Prosecna ocena: ");
    scanf("%f",&k->prosecna_ocena);
    printf("Godina studija: ");
    scanf("%d",&k->godina_studija);
    getchar();
    printf("\n");
}

void ispis_kandidata(Kandidat k)
{
    printf("Puno ime: %s\n",k.ime);
    printf("Prosecna ocena: %.2f\n",k.prosecna_ocena);
    printf("Godina studija: %d\n\n",k.godina_studija);
}

int master_studije(Kandidat niz[], int n)
{
    int brojac = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        if ( niz[i].godina_studija == 4 && niz[i].prosecna_ocena >= 8.5)
            {
                brojac++;
            }
    }

    return brojac;
}
