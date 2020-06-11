/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[100];
    gets(str);

    printf("%d",strlen(str));

    return 0;
}
*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char string[100];
//	int i;
//
//	gets(string);
//
//	for (i = 0; string[i] != '\0'; i++);
//
//	printf("%d\n", i);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[100];
    gets(str);
    int n,i,duzina = 0;

    n = strlen(str);

    for(i = 0; i < n; i++)
    {
        duzina++;
    }

    printf("%d",duzina);
    return 0;
}
