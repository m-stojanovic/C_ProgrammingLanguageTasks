#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    scanf("%d",&a);

    int cj = a % 10;
    int cd = (a / 10) % 10;

    int cs = ( a / 100) % 10;
    int ch = a / 1000;

    if ( cj == ch && cd == cs )
    {
        printf("Broj jeste polindrom!");
    }
    else
    {
        printf("Broj nije polindrom!");

    }


    return 0;
}
