#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf("%c",&n);

    if(n >= 'A' && n <= 'Z')
    {
        n = n + 32;
        printf("Slovo: %c",n);
    }
    else if(n >= 'a' && n <='z')
    {
        n = n - 32;
        printf("Slovo: %c",n);
    }
    else
    {
        printf("Uneti karakter nije slovo!");
    }



    return 0;
}
