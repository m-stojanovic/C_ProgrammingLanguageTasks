#include <stdio.h>
#include <stdlib.h>
//6. Napisati funkciju int isEven(int x) koja proverava da li je uneti broj paran ili ne.
int paran(int n)
{
    if ( n % 2 == 0 )
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    if (paran(n))
    {
        printf("Paran!");
    }
    else
    {
        printf("Neparan!");
    }

    return 0;
}
