#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main ()
{
    int i,n,k;
    scanf("%d%d",&k,&n);
    for (i = k; i <= n; ++i )
        {
            if ( i % 5 == 0 )
            {
                printf("%d ",i);
            }
        }
    return 0;
}
