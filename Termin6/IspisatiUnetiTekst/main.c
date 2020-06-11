#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while ((c = getchar())!='\n') {
        putchar(c);
    }
    return 0;
}
//Ucitam karakter,i vidim dal je taj karakter enter,ako nije ispisem ga,pa ucitam novi karakter i tako sve do entera
