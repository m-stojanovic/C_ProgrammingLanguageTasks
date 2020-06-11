#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c,nb,nt,nl;
    nb = 0;
    nt = 0;
    nl = 0;

    while ((c=getchar())!= EOF)
    {
            if (c=='\n')
            ++nl;
            else if (c=='\t')
            ++nt;
            else if (c==' ')
            ++nb;
    printf("Redova: %d Tabova: %d Razmaka: %d \n",nl,nt,nb);
    }

    return 0;
}
