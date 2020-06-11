// 7. Za uneti niz, prvo ispisati sve elemente na parnim, a zatim na neparnim
// pozicijama.

#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d",&n);
    int niz[n],i;

    for(i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }
    for(i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Parni %d\n",niz[i]);
        }
    }
    for(i = 0; i < n; i++)
    {
        if ( i % 2 != 0)
        {
            printf("Neparni %d\n",niz[i]);
        }
    }
    return 0;
}

