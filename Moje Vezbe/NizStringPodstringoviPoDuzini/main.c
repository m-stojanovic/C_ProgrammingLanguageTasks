// 5. Napisati program kojim se unosi tekst. Ispisati sve podstringove unetog teksta koji su
// sortirani po dužini.
//
// Ulaz:
// abcd
//
// Izlaz:
// a
// b
// c
// d
// ab
// bc
// cd
// abc
// bcd
// abcd
// Link za Petlju: https://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/03_podstringovi_po_duzini

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int length, i, j;
    int n = strlen(s);

    for (length = 1; length <= n; length++) {
        for (i = 0; i + length <= n; i++) {
            for (j = i; j < i + length; j++) {
            	putchar(s[j]);
            }

            putchar('\n');
        }
    }

    return 0;
}
