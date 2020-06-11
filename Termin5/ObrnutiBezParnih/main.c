#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cifra,n,obrnuti = 0;
    scanf("%d",&n);
    while (n>0) {
        cifra = n % 10;
        n = n / 10;
        if (cifra%2!=0) obrnuti = obrnuti*10+cifra;
    }
    printf("%d",obrnuti);
    return 0;
}
