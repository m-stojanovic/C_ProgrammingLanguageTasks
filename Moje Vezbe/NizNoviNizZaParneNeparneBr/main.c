#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Napisati program koji za uneti niz A, duzine N, formira nizove B i C tako da su elementi niza B
parni članovi niza A, a elementi niza C su neparni članovi niza A.
*/
int main()
{
    int n,i,j = 0,k = 0;
    scanf("%d",&n);
    int niz[n];
    int b[n];
    int c[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(niz[i] % 2 == 0)
        {
            b[k] = niz[i];
            k++;
        }

        else
        {
            c[j] = niz[i];
            j++;
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ",b[i]);
    }

    printf("\n");

    for (i = 0; i < j; i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}
