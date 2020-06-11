// 8. Za uneti niz realnih brojeva ispisati najveći, najmanji element, i prosjek.

#include <stdio.h>

int main()
{
    int niz[100];
    int n, i;
    int max = 0, min, zbir = 0;

    printf("Unesi duzinu niza:\n");
    scanf("%d", &n);
    printf("Unesi niz:\n");

    for(i = 0; i < n; i ++)
    {
        scanf("%d",&niz[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(niz[i] > max)
        {
            max = niz[i];
        }
    }

    min = niz[0];

    for (i = 0; i < n; i++)
    {
        if(niz[i] < min)
        {
            min = niz[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        zbir = zbir + niz[i];
    }


    float prosek = (float)zbir / n;

    printf("Najveci broj je: %d\n", max);
    printf("Najmanji broj je: %d\n", min);
    printf("Prosek je: %.2f", prosek);

    return 0;
}

