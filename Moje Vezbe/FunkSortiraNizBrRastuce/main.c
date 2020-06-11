#include <stdio.h>
#include <stdlib.h>
// 5. Korisnik unosi broj N i članove niza. Napisati funkciju void sort(int array[], int n) koja sortira
// uneti niz brojeva u rastućem poretku.

void zamena(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort(int niz[], int n)
{
    int i,j;
    for ( i = 1; i < n; i++ )
    {
        for ( j = 0; j < n - i; j++ )
        {
            if ( niz[j] > niz[j+1])
            {
                zamena(&niz[j],&niz[j+1]);
            }
        }
    }
}

//void funkcija(int niz[], int n) ovako bez void zamena
//{
//    int i,j;
//
//    for(i = 1; i < n; i++)
//    {
//        for( j = 0; j < n - i; j++ )
//        {
//            if(niz[j] > niz[j + 1])
//            {
//                int temp = niz[j];
//                niz[j] = niz[j + 1];
//                niz[j + 1] = temp;
//            }
//        }
//    }
//}

int main()
{
    int i, n;
    scanf("%d",&n);
    int niz[n];

    for ( i = 0; i < n; i++ )
    {
        scanf("%d",&niz[i]);
    }

    sort(niz,n);

    for ( i = 0; i < n; i++ )
    {
        printf("%d ",niz[i]);
    }

    return 0;
}
