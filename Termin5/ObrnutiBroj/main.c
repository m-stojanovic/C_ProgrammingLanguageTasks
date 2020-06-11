#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cifra,n,obrnuti = 0;
    scanf("%d",&n);
    while (n>0) {
        cifra = n % 10;
        n = n / 10;
        obrnuti = obrnuti*10+cifra;
    }
    printf("%d",obrnuti);
    return 0;
}
/*
Ide ovako: obrnuti = 0 -> 0 = 0 * 10 + 4(CIFRA) -> 4 = 4*10 + 3(NOVA CIFRA) = 43 -> 43 = 43*10 + 2 (OPET NOVA) = 432
-> 432 = 432*10+1(NOVA OPET) = 4321 - dobijen obrnuti broj, (n>0) staje jer nema vise cifara da obrce.
*/
