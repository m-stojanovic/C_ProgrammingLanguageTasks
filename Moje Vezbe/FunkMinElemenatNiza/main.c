#include <stdio.h>
#include <stdlib.h>
// 2. Korisnik unosi broj N i članove niza. Napisati funkciju koja izračunava minimalni element u
// nizu.
int minimalni(int *niz,int n)
{
    int i;
    int min = niz[0];
    for ( i = 0; i < n; i++ )
    {
        if(niz[i] < min)
        {
            min = niz[i];
        }
    }

    return min;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int niz[n];

    for ( i = 0; i < n; i++ )
    {
        scanf("%d",&niz[i]);
    }

    printf("%d",minimalni(niz,n));
    return 0;
}
