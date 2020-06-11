#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Napisati funkciju int isPalindrome(char* string) koja proverava da li je uneti string palindrom.
int isPalindrom(char *string)
{
    int n = strlen(string);
    int i;
    int j = n - 1;
    int k = 0;

    for ( i = 0; i < n / 2; i++ )
    {
        if (string[k++] != string[j--])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char string[1024];
    gets(string);

    if (isPalindrom(string))
    {
      printf("%s - Jeste Palindrom!\n",string);
    }
    else
    {
        printf("%s - Nije Palindrom!\n",string);
    }
    return 0;
}
