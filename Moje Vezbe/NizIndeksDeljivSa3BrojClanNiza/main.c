#include <stdio.h>
#include <stdlib.h>
// Učitati članove niza. Izračunati i ispisati broj članova niza čiji je indeks deljivi sa 3.
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
        if(i % 3 == 0) // Ispis elemenata niza sa indeksom koji su deljivi sa 3
        {
            broj++;
            printf("%d ",niz[i]);
        }
    }

    printf("\n%d",broj);
    return 0;
}

