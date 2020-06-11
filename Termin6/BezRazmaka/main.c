#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while ((c = getchar())!='\n') {
        if (c!=' ')putchar(c);
    }
    return 0;
}
