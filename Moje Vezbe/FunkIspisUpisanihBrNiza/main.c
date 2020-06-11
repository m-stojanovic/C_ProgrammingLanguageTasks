#include <stdio.h>
#include <stdlib.h>
// 7. Korisnik unosi broj N i članove niza. Napisati funkciju void printArray(int array[], int n) koja
// ispisuje uneti niz brojeva.

void printArray(int niz[], int n)
{
    int i;
    for ( i = 0; i < n; i++ )
    {
        printf("%d ",niz[i]);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int niz[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }

    printArray(niz,n);

    return 0;
}
