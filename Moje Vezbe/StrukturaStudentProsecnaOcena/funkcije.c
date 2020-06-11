#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studenti.h"

void upis_studenata(Student *s)
{
    printf("Puno ime studenta: ");
    gets(s->naziv);
    printf("Prosecna ocena studenta: ");
    scanf("%f",&s->prosecna_ocena);
    getchar();
    printf("\n");
}

void ispis_studenata(Student s)
{
    printf("Puno ime: %s\n",s.naziv);
    printf("Prosecna ocena: %.2f\n\n",s.prosecna_ocena);
}

float najveca_prosecna_ocena(Student niz[], int n)
{
    int i;
    float max = niz[0].prosecna_ocena;

    for(i = 0; i < n; i++)
    {
        if(niz[i].prosecna_ocena > max)
        {
            max = niz[i].prosecna_ocena;
        }
    }

    return max;
}
