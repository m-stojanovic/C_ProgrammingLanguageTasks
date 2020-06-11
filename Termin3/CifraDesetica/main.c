#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int cifraDesetica = (a/10)%10;
    printf("%d",cifraDesetica);
    return 0;
}
