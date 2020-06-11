#include <stdio.h>
#include <stdlib.h>
//12. Izračunati prosjek u nizu brojeva, sortirati ga i ispisati na kojoj se poziciji nalazi element
//    najbliži prosjeku (po abs() vrijednosti).

int main()
{
    int n,i,index;
    printf("Unesite duzinu niza: ");
    scanf("%d",&n);

    int niz[n];

    for (i = 0; i < n; i ++)
    {
        printf("Upisati clan niza %d/%d: ", i +1, n);
        scanf("%d",&niz[i]);
    }

    int zbir = 0;
    int tmp = 0;
    int j;

    for ( i = 0; i < n; i++)
    {
        zbir = zbir + niz[i];
    }

    float prosek = (float)zbir / n;
    printf("Prosek: %.2f\n",prosek);

    for ( i = 0; i < n; i++ ) // i < n - 1
    {
        for ( j = 0; j < n; j++) // j < n - i - 1
        {
            while ( niz[j] > niz[i]) // niz[j] > niz[j + 1]
                {
                    tmp = niz[i]; // tmp = niz[j]
                    niz[i] = niz[j]; // niz[j] = niz[j+1]
                    niz[j] = tmp; //niz[j+1] = tmp
                }
        }
    }

    for ( i = 0; i < n; i++ )
    {
        printf("%d ",niz[i]);
    }

    int najblizi = niz[0];

    for ( i = 0; i < n; i++)
    {
        if (abs(prosek - niz[i]) < abs(prosek - najblizi))
        {
            najblizi = niz[i];
            index = i;
        }
    }

    printf("Najblizi: %d\n",najblizi);

    return 0;
}
