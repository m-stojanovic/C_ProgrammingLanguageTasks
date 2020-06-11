#include <stdio.h>
#include <stdlib.h>
// 2. Napisati program koji sadrži funkciju koja kopira jedan string u drugi, menjajući svako veliko
// slovo prvog stringa u upitnik pri kopiranju, sve ostalo se kopira netaknuto. Omogućiti korisniku da
// unese string za testiranje i prikazati rezultat.
void string_upitnik(char string[], char copy[])
{
    int i;
    int j = 0;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            copy[j++] = '?';
        }
        else
        {
            copy[j++] = string[i];
        }
    }

    copy[j] = '\0';
}

int main()
{
    char copy[64];
    char string[64];
    gets(string);

    string_upitnik(string,copy);
    printf("%s",copy);

    return 0;
}
