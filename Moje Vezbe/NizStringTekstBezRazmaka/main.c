#include <stdio.h>
#include <string.h>


int main()
{
    char tekst[30];
    char bezRazmaka[30];
    int i, p = 0;

    printf("Unesite tekst : ");
    gets(tekst);

    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] != ' ')
        {
            bezRazmaka[p] = tekst[i];
            p++;
        }
    }

    bezRazmaka[p] = '\0';
    printf("Tekst bez razmaka : %s\n", bezRazmaka);

    return 0;
}

//int main()
//{
//    char c;
//    while ((c = getchar())!='\n') {
//        if (c!=' ')putchar(c);
//    }
//    return 0;
//}
