#include <stdio.h>
#include <string.h>

int main()
{

    char s[256];
    gets(s);

    int n = strlen(s);

    int i;

    for(i=0; i<n; i++)
    {
        if(s[i]!=' ')
        {
            printf("%c", s[i]);
        }
    }


    return 0;
}
