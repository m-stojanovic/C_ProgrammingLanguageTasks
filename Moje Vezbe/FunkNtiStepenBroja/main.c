#include <stdio.h>
#include <stdlib.h>
// 3. Korisnik unosi dva broja. Napisati funkciju int power(int x, int n) gde je x broj za koji želimo da
// nađemo n-ti stepen.
int power(int x, int n)
{
    int i;
    int broj = 1;
    for ( i = 0; i < n; i++ )
    {
        broj = x * broj;
    }

    return broj;
}

int main()
{
    int n,x;
    scanf("%d%d",&x,&n);

    printf("%d",power(x,n));
    return 0;
}
