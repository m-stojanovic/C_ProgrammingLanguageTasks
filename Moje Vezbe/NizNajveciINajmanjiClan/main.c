#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,niz[n];
    scanf("%d",&n);

    for( i = 0; i < n; i++ )
    {
        printf("Uneti clan niza: ");
        scanf("%d",&niz[i]);
    }

    int manji = niz[0];
    int veci = niz[0];

    for( i = 1; i<n; i++)
    {
        if(niz[i]>veci)
        {
            veci = niz[i];
        }
        if(manji>niz[i])
        {
            manji = niz[i];
        }
    }

    printf("Najveci clan: %d\n",veci);
    printf("Najmanji clan: %d\n",manji);

    return 0;
}
