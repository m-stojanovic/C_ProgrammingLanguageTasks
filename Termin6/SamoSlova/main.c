#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while ((c = getchar())!='\n') {
        if (!(c>='0' && c<='9')) putchar(c);
    }
    return 0;
}
