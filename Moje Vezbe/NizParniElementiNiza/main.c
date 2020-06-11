#include <stdio.h>
#include <math.h>

int main()
{

    int i,e, suma=0;

    printf("Unesi duzinu niza: ");
    scanf("%d",&e);
    int niz[e];
    printf("Unesi elemente niza: \n");

    for( i = 0; i < e; i++ )
    {
        scanf("%d",&niz[i]);
    }
    for(i = 0; i < e; i++ )
    {
        if ( niz[i] % 2 == 0 )
            printf("Parni elementi niza su: %d\n", niz[i]);

    }
   return 0;
}
