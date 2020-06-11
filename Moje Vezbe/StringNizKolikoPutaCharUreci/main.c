#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[100],n;
    gets(str);
    scanf("%c",&n);
    int brojac = 0,i;

    for(i = 0; i < n; i++)
    {
        if(str[i] == n)
        {
            brojac++;
        }
    }

    printf("%d",brojac);

    return 0;
}
