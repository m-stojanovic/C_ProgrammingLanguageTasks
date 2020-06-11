#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while ((c = getchar())!='\n') {
        if (c>='a' && c<='z') {
            if (c+3>'z') putchar(c+3 - ('z'-'a'+1) );
            else putchar(c+3);
        }
         if (c>='A' && c<='Z') {
            if (c+3>'Z') putchar(c+3 - ('Z'-'A'+1) );
            else putchar(c+3);
        }
    }
    return 0;
}
