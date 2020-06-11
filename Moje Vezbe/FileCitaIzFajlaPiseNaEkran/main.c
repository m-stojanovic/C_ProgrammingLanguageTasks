#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tekst[4096];

    FILE *izlazni;
    izlazni = fopen("izlazni.txt", "r");

    if ( izlazni == NULL )
    {
        printf("Greska!");
        return 0;
    }

    while(!feof(izlazni))
    {
        fgets(tekst, 4096, izlazni);
        printf("%s",tekst);
    }

    fclose(izlazni);

    return 0;
}

