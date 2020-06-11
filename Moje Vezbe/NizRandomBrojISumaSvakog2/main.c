#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() // Ospeg brojeva [5 i 23]
{
    srand(time(NULL));

    int n,i;
    scanf("%d",&n);

    int niz[n];
    int zbir = 0;

    for( i = 0; i < n; i++ )
    {
        niz[i] = rand() % 19 + 5; // ostatak je 19 = rand()%(m-n+1) i onda + donja granica (n) da dobijemo rand broj
        printf("%d\n",niz[i]);
    }

    for ( i = 0; i < n; i = i + 2 )
    {
        zbir = zbir + niz[i];
    }

    printf("Suma: %d",zbir);

    return 0;
}
