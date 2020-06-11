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
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c", s[i]-32);
        }
        else
        {
            printf("%c", s[i]);
        }

    }

    return 0;
}
