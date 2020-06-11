#include <stdio.h>
#include <stdlib.h>
// 9. Napisati funkciju int reverse(int x) koja uneti broj pretvara u obrnut.

int obrnut(int x)
{
    int broj = 0;
    int cifra;
    while(x > 0)
    {
        cifra = x % 10;
        broj = broj * 10 + cifra;
        x = x / 10;
    }

    return broj;
}


int main()
{
    int x;
    scanf("%d",&x);

    printf("%d",obrnut(x));
    return 0;
}
