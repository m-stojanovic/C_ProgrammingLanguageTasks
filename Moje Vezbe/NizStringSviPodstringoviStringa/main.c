// 4. Napisati program kojim se unosi tekst. Ispisati sve podstringove unetog teksta. Redosled
// podstringova mora biti isti kao što je navedeno u primeru.
//
// Ulaz:
// abcd
//
// Izlaz:
// a
// ab
// abc
// abcd
// b
// bc
// bcd
// c
// cd
// d
// Link za Petlju: https://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/02_podstringovi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int i, j, k;
    int n = strlen(s);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
            	putchar(s[k]);
            }

            putchar('\n');
        }
    }

    return 0;
}
