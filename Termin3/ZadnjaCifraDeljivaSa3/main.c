#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int cifraJedinica = a % 10;
    if (cifraJedinica % 3 == 0) printf("Cifra jedinica je deljiva sa 3");
    else printf("Cifra jedinica nije deljiva sa 3");
    return 0;
}
