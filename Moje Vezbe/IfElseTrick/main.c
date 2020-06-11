#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int  c = ( a > 0 ) ? 10: -10;
    printf("%d",c);
    return 0;
}

// Ako je a > 0 onda je c = 10, ako a <=0 onda je c = - 10
