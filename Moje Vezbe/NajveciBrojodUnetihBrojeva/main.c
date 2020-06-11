#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,n,max;
    max = 0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&n);
        if ( n > max )
        {
            max = n;
        }
    }
    printf("%d",max);
    return 0;
}
