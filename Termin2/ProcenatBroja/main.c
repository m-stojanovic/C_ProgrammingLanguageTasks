#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, procenat;
        printf("Unesite broj n:\n");
        scanf("%d",&n);
        printf("Unesite procenat:\n");
        scanf("%d",&procenat);
        double resenje = (procenat/100.0) * n;
        printf("%lf",resenje);
    return 0;
}
