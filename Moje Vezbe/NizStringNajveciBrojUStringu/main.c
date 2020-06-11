// 9. Napisati program koji pronalazi najveći broj u unetom tekstu.
//
// Ulaz:
// aa99faff922f20f0333
//
// Izlaz:
// 922

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;
    int broj = 0;
    int max = 0;

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            broj = broj * 10 + (ch - 48);
            // broj = broj * 10 + (ch - '0');
        } else {
        	// I nacin
        	if (broj > max) {
        		max = broj;
        	}

        	// II nacin
            // max = (broj > max) ? broj : max;
            broj = 0;
        }
    }

	 if (broj > max) {
	 	max = broj;
	 }

    printf("%d", max);
    return 0;
}
