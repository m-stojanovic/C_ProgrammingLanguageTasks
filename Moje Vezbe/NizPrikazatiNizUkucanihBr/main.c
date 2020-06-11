#include <stdio.h>
#include <math.h>

int main ()
{
    int niz[10],i;
    for ( i = 0; i < 10; i++ )
    {
        printf("Unesti %d. broj od 10: ",i+1);
        scanf("%d",&niz[i]);
    }
    for( i = 0; i < 10; i++ )
    {
        printf("%d\n",niz[i]);
    }
    return 0;
}

//    for( i = 9; i >= 0; i-- )
//    {
//        printf("%d\n",niz[i]);
//    }
/*
int main()
{
    int n,i;
    scanf("%d",&n);
    int niz[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);

    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",niz[i]);
    }
    return 0;
}
*/
