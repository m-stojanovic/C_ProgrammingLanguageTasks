#include <stdio.h>
#include <stdlib.h>
// 2. Napisati program koji sadrži funkciju koja za dati string vraća poziciju prve tačke u njemu. Ako
// nije pronađena, vratiti -1. Omogućiti korisniku da unese string za testiranje i prikazati rezultat.
int pozicija(char string[])
{
    int i;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == '.')
        {
            return i + 1;
        }
    }

    return -1;
}
int main()
{
    char string[64];
    gets(string);

    printf("Prva tacka se pojavljuje na poziciji: %d",pozicija(string));

    return 0;
}
