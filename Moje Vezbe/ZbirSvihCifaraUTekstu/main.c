#include <stdio.h>
#include <string.h>

int main()
{

    char s[256];
    gets(s);
    int n = strlen(s);
    int i;

    int zbir=0;

    for(i=0; i<n; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            zbir+=s[i]-'0';
        }

    }

    printf("%d", zbir);



    return 0;
}
