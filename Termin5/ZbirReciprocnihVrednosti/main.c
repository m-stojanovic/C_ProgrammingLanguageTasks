#include <stdio.h>
#include <stdlib.h>

int main()
{
    double zbir = 0;
    int i,n;
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        zbir = zbir + 1.0 / i;
    }
    printf("%lf",zbir);
    return 0;
}
// Reciprocna vrednost od -1 je -1 od 1 je 1 , 0 nema reciprocnu vrednost

