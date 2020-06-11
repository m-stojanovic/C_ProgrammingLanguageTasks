#include <stdio.h>
#include <math.h>

int main ()

{
    char tekst[50];
    char i;
    printf("Unesite tekst:\n");
    gets(tekst);
    for( i = 0; tekst[i] != '\0'; i++ )
    {
        if ((tekst[i] >= 'A') && (tekst[i] <= 'Z'))
        {
            tekst[i] = tekst[i] + 32;
            printf("%c\n",tekst[i]);
        }
        else if ((tekst[i] >='a') && (tekst[i] <= 'z'))
        {
            tekst [i] = tekst[i] - 32;
            printf("%c\n",tekst[i]);
        }
    }
    return 0;
}

