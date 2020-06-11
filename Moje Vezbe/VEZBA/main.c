#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,n;
    int niz[100];
    scanf("%d",&n);
    int trazeni;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }

    printf("koji broj trazite?\n");
    scanf("%d",&trazeni);

    int ponavlja = 0;
    for(i = 0; i < n; i++)
    {
        if( trazeni == niz[i])
        {
            ponavlja=ponavlja + 1;
        }
    }

    printf("ponavlja se: %d",ponavlja);

    return 0;
}
