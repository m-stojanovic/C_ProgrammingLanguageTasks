#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,niz[n];
    int zbir = 0;
    float avg;
    scanf("%d",&n);

    for( i = 0; i <n; i++ )
    {
        printf("Uneti clan niza: ");
        scanf("%d",&niz[i]);
    }

    for( i = 0; i < n; i++)
    {
        zbir = zbir + niz[i];
    }

    avg = (float)zbir / n;

    printf("Prosek: %.2f",avg);

    return 0;
}
