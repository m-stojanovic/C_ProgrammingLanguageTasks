// 10. Napisati program koji računa zbir svih cifara u unetom tekstu.
//
// Ulaz:
// L33th4x0r
//
// Izlaz:
// 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[1000];
	int number = 0;
	int sum = 0;
	int sumAll = 0;
	gets(str);
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			sum += str[i] - '0';
			// BONUS: Računa sumu svih brojeva!
			number = number * 10 + str[i] - '0';
		} else {
			sumAll += number;
			number = 0;
		}
	}

	// Provera za poslednji karakter
	if (number > 0) {
		sumAll += number;
	}

	printf("%d\n", sum);
	printf("%d\n", sumAll);

	return 0;
}
