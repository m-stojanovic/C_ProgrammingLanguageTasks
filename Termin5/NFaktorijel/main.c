#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,faktorijel = 1;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        faktorijel = faktorijel * i;
    }
    printf("%d",faktorijel);
    return 0;
}
