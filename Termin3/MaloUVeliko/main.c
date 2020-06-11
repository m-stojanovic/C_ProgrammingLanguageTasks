#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c",&c);
    c =  c - 32;
    printf("%c",c);
    return 0;
}

/*
int main () {
   char n;
       scanf("%c",&n);
        if (( n<'z') && (n>'a'))
        {
            n = n-32;
            printf("Veliko slovo je %c",n);

        }
        else printf("Unesite malo slovo");
   return 0;
}
*/
