// 10. Napisati program koji uneti string piše obrnuto.
//
// Ulaz:
// u-c u ivognirts
//
// Izlaz:
// stringovi u c-u

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string[100];
	int i, j;
	gets(string);
	int n = strlen(string);

	for (i = 0; i < n / 2; i++) {
		char tmp = string[i];
		string[i] = string[n - i - 1];
		string[n - i - 1] = tmp;
	}

	printf("%s\n", string);

    return 0;
}
