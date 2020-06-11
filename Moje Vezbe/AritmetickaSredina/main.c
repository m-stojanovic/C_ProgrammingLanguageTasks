#include <stdio.h>
#include <math.h>

int main ()
{
    float i,n,zbir = 0,gornjiZbir = 0;
    float as;
    scanf("%f",&n);
    for( i = 1; i <= n; i++ )
    {
        zbir++;
        gornjiZbir = gornjiZbir + i ;
    }
    as = gornjiZbir / zbir;
    printf("%.2f",as);
    return 0;
}
