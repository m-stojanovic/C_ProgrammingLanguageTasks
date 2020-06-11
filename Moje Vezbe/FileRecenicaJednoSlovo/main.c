#include <stdio.h>
#include <stdlib.h>


int funckija(char *string, char c)
{
    int i,brojac = 0;
    int n = strlen(string);

    for ( i = 0; i < n; i++)
    {
        if ( string[i] == c)
        {
            brojac++;
        }
    }

    return brojac;
}

int main()
{
    char string[1024];
    gets(string);
    char c;
    scanf("%c",&c);

    FILE *izlazni;

    izlazni = fopen("izlazni.txt", "wt");
    fprintf(izlazni,"%d", funckija(string, c));

    fclose(izlazni);

    return 0;
}
