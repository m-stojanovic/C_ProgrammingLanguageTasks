#include <stdio.h>
#include <stdlib.h>


//1-2+3-4+5....n

int main()
{
    double zbir = 0;
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        zbir = zbir + pow(2,i);
    }
    printf("%lf",zbir);
    return 0;
}
/*
Uzmimo da je n = 5..i = 0;
Ovako:
Za i < n uzimamo vrednosti i = 0,1,2,3,4
zbir = 0 + 2^0 = 0 + 1 = 1 -> za i = 0
zbir = 1 + 2^1 = 1 + 2 = 3 -> za i = 1
zbir = 3 + 2^2 = 3 + 4 = 7 -> za i = 2 Sto znaci ako je n = 3 izbacuje vrednost 7.00
zbir = 7 + 2^3 = 7 + 8 = 15 -> za i = 3 Sto znaci ako je n = 4 izbacuje vrednost 15.00
zbir = 15 + 2^4 = 15 + 16 = 31 -> za i = 4 Sto znaci ako je n = 5 izbacuje vrednost 31.00
Drugi nacin:
1kroz1 + 1kroz2 + 1kroz4 + 1kroz8 + 1kroz16 = 1 + 1kroz30 = 1 ceo i 1kroz30 = 31kroz30 = 31
stepen 0 + stepen 1 + stepen 2 + stepen 3 + stepen 4
*/
