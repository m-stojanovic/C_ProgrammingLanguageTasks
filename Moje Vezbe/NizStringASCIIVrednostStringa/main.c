// 7. Napisati program kojim se unosi string s. Napraviti novi string koji se sastoji od ASCII
// vrednosti svakog karaktera u polaznom stringu. Za svaki karakter upotrebiti 3 cifre.
//
// Ulaz:
// RAFraf
//
// Izlaz:
// 082065070114097102
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    gets(string);
    int i;

    for(i = 0; i < strlen(string); i++)
    {
        printf("%03d ",string[i]);
    }
    return 0;
}
