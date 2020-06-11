#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 2. Napisati program koji sadrži funkciju koja prebrojava koliko parnih cifara ima u datom stringu i
// vraća taj broj kao rezultat. Omogućiti korisniku da unese string za testiranje i prikazati broj.
int parne_cifre(char string[])
{
    int brojac = 0;
    int i;
    int n = strlen(string);

    for(i = 0; i < n; i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            int broj = string[i] - 48;  // broj = broj * 10 + string[i] - '0';
            if(broj % 2 == 0)
            {
                brojac++;
            }
//            broj = 0;
        }
    }

    return brojac;
}


int main()
{
    char string[64];
    gets(string);

    printf("%d",parne_cifre(string));

    return 0;
}
