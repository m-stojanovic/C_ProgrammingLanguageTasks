#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = getchar();
    char last = ch;
    putchar(ch);


    while((ch = getchar()) != '\n')
    {
        if (ch != last)
        {
            putchar(ch);
        }
        last = ch;
    }

    return 0;
}
