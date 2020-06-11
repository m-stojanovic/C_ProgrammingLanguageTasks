#include <stdio.h>
#include <math.h>

int main ()
{
    int i,n,a,suma = 0;
    scanf("%d",&n);
    for( i = 1; i <= n; i++ )
    {

        scanf("%d",&a);
        suma = suma + a;
    }

    printf("%d",suma);
    return 0;
}
