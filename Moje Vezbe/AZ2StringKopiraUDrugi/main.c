#include <stdio.h>
#include <stdlib.h>
//2) Napisati program koji sadrži funkciju koja kopira jedan string u drugi, izbacujući razmake.
//Omogućiti korisniku da unese string za testiranje i prikazati rezultat.
void kopiranje_stringa(char niz[], char copy[])
{
    int i, j = 0;

    for(i = 0; niz[i] != '\0'; i++)
    {
        if(niz[i] != ' ')
        {
            copy[j++] = niz[i];
        }
    }

    copy[j] = '\0';

}
int main()
{
    char copy[64];
    char niz[64];
    gets(niz);

    kopiranje_stringa(niz,copy);
    printf("Novi niz: %s",copy);

    return 0;
}
