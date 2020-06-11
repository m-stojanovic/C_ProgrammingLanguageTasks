#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int zbir = 0;
    for (i = 1; i<=n; i++) {
        zbir = zbir + i;
    }
    printf("%d",zbir);
    return 0;
}
