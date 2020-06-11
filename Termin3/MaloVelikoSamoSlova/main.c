#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf("%c",&n);

    if(n < 'Z')
    {
        n = n + 32;
    }
    else
    {
        n = n - 32;
    }

    printf("Slovo: %c",n);

    return 0;
}
