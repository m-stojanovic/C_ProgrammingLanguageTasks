#include <stdio.h>
#include <string.h>

int main()
{

    char s[256];
    char s2[256];
    gets(s);
    int n = strlen(s);
    int i;

    int broj=0;

    for(i=0; i<n; i++)
    {
        s2[n-i-1] = s[i];
    }

    s2[n]='\0';

    printf("%s", s2);

    return 0;
}
