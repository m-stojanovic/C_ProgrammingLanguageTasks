#include <stdio.h>
#include <string.h>


int main()
{
    char tekst[30];
    int i, nasliA = 0;

    printf("Unesite tekst : ");
    gets(tekst);

    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] == 'A' || tekst[i] == 'a')
        {
            nasliA = 1;
            break;
        }
    }

    if(nasliA)
        printf("Nasli smo slovo A!");
    else
        printf("Nismo nasli slovo A.");

    return 0;
}
