#include <stdio.h>
#include <stdlib.h>
//1) Napisati program koji sadrži funkciju koja računa zbir prvih n prirodnih brojeva. Ako je dati broj
//nula ili negativan, vratiti -1. Iskoristiti funkciju tako što će korisnik da unese broj, nakon čega će
//biti ispisan zbir.
int zbir_brojeva(int n)
{
    int i;
    int suma = 0;

    for(i = 0; i <= n; i++)
    {
        if(n <= 0)
        {
            return -1;
        }
        else
        {
            suma = suma + i;
        }
    }

    return suma;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("Suma brojeva: %d",zbir_brojeva(n));

    return 0;
}
