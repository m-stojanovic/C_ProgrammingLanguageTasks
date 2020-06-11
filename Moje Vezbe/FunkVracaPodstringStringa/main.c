#include <stdio.h>
#include <stdlib.h>
// 10. Korisnik unosi string i početni i krajnji indeks. Napisati funkciju char* substring(char* string,
// int start, int end) koja vraća podstring unetog stringa.

char *podstring(char *string, int start, int end)
{
    char *pointer = malloc(end + 1);
    int c;

    for (c = 0; c < end; c++)
    {
        *(pointer + c) = * (string + start);
        string++;
    }

    *(pointer + c) = '\0';
    return pointer;
}

int main()
{
    char string[1024];
    int start,end;
    gets(string);
    scanf("%d %d",&start, &end);
    printf("%s\n",podstring(string, start, end));
    return 0;
}
