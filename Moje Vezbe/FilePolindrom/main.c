#include <stdio.h>

int main()
{
    int i, j = 0, palindrom = 1;
    char tekst[50], norm[50];
    FILE *f;

    f = fopen("palindrom.txt", "rt");
    if(f == NULL)
    {
        printf("Ne mozemo otvoriti fajl 'palindrom.txt' za citanje.\n");
        return 1;
    }

    fgets(tekst, 50, f);
    fclose(f);

    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] >= 'A' && tekst[i] <= 'Z')
        {
            norm[j++] = tekst[i];
        }
        else if(tekst[i] >= 'a' && tekst[j] <= 'z')
        {
            norm[j++] = tekst[i] - 32;
        }
    }
    norm[j] = '\0';

    printf("Normalizovano : '%s'\n", norm);

    for(i = 0; i < j / 2; i++)
    {
        if(norm[i] != norm[j - i - 1])
        {
            palindrom = 0;
            break;
        }
    }

    if(palindrom)
        printf("Tekst jeste palindrom!\n");
    else
        printf("Tekst nije palindrom.\n");

    return 0;
}
