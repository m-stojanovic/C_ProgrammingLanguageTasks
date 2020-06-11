#include <stdio.h>
#include <stdlib.h>
// Izračunati proizvod pozitivnih članova niza djeljivih sa 4.
int main()
{
    int n,i,broj = 0;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&n);
    int niz[n];
    int proizvod = 1;

    for ( i = 0; i < n; i++)
    {
        printf("Unesite %d/%d clana niza: ",i+1,n);
        scanf("%d",&niz[i]);
    }

    for ( i = 0; i < n; i++ )
    {
        if ( niz[i] % 4 == 0 && niz[i] > 0)
        {
            proizvod = proizvod * niz[i];
            printf("%d ",niz[i]);
        }
    }

    printf("\n%d",proizvod);
    return 0;
}

