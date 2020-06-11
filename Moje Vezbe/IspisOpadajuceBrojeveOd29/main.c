#include <stdio.h>
#include <stdlib.h>
// Ispisati neparne prirodne brojeve u opadajućem poretku, počevši od 29.
int main()
{
    int n,i;


    for ( i = 29; i >= 0; i = i - 2)
    {
        printf("%d\n",i);
    }

    return 0;
}
