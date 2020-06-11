#include <stdio.h>
#include <stdlib.h>
// Učitati članove niza. Ispisati: članove niza koji su veći od slijedećeg člana.
int main()
{
    int n,i,broj = 0;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&n);
    int niz[n];

    for ( i = 0; i < n; i++)
    {
        printf("Unesite %d/%d clana niza: ",i+1,n);
        scanf("%d",&niz[i]);
    }

    for ( i = 0; i < n; i++ )
    {
        if ( niz[i] > niz[i + 1])
        {
            printf("%d ",niz[i]);
        }
    }



    return 0;
}

