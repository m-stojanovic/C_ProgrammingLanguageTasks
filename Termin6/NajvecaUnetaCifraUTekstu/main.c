#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char max='0';
    while ((c = getchar())!='\n') {
        if (c>max) max=c;
    }
    putchar(max);
    return 0;
}
