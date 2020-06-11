#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float poluPrecnik;
    scanf("%f",&poluPrecnik);
    float povrsina,obim,pi,precnik;
    precnik = 2 * poluPrecnik;
    pi = 3.14;
    povrsina = poluPrecnik*poluPrecnik*pi;
    obim = pi * precnik;
    printf("Povrsina trougla je: %.2f\n",povrsina);
    printf("Obim trougla je: %.2f",obim);
    return 0;
}
