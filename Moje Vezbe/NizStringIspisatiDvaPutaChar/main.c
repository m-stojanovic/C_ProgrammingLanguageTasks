// 6. Napisati program kojim se unosi tekst. Ispisati uneti tekst tako da se svaki karakter pojavi
// tačno dva puta.
//
// Ulaz:
// RAF
//
// Izlaz:
// RRAAFF
// Link za Petlju: https://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/05_duplirajString

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    gets(str);
    int i;
    int n = strlen(str);

    for(i = n - 1; i >= 0; i--)
    {
        str[2 * i] = str[2 * i + 1] = str[i];
    }

    str[2 * n] = '\0';
    printf("%s\n", str);

    return 0;
}
