// 9. Napisati program koji izbacuje iz stringa sve karaktere koji nisu slovo.
//
// Ulaz:
// ://pr#o49(#=gr0a39=m)“
//
// Izlaz:
// program

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string[100];
	int i, j;

	gets(string);

	for (i = 0; string[i] != '\0'; i++) {
    while (!((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') || (string[i] == '\0')))
        {
            for (j = i; string[j] != '\0'; j++) {
                string[j] = string[j + 1];
            }

            string[j] = '\0';
        }
	}

	printf("%s\n", string);

    return 0;
}
//Brzi Nacin:
//int main()
//{
//
//    char c;
//    while ( (c = getchar()) != '\n' )
//    {
//        if ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
//        {
//            putchar(c);
//        }
//    }
//
//    return 0;
//}
