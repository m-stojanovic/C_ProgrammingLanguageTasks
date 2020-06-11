#include <stdio.h>
#include <string.h>

int main()
{

    char s[256];
    gets(s);
    int n = strlen(s);
    int i;

    int broj=0;

    for(i=0; i<n; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            broj++;
        }

    }

    printf("%d", broj);

    return 0;
}
