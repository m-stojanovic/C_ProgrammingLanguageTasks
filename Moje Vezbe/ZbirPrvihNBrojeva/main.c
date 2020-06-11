// 2. Izračunati zbir prvih n prirodnih brojeva.

#include <stdio.h>

int main()
{
	int n, i, suma = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		suma += i;
	}

	printf("Suma je: %d", suma);
	return 0;
}
