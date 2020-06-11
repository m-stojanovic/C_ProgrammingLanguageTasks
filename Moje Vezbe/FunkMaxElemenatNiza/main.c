#include <stdio.h>
#include <stdlib.h>
// 1. Korisnik unosi broj N i članove niza. Napisati funkciju koja izračunava maksimalni element u
// nizu.

int maksimalni(int *niz, int n)
{
    int max = 0;
    int i;


    for(i = 0; i < n; i++)
    {
        if(niz[i] > max)
        {
            max = niz[i];
        }
    }

    return max;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int niz[n];


    for (i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }

    printf("%d",maksimalni(niz,n));
    return 0;
}
