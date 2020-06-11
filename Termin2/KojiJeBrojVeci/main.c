#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Unesite dva broja\n");
    scanf("%d%d", &a,&b);
    if (a>b) {
        printf("Veci je:%d\n",a);
    }
    else if (b>a) {
        printf("Veci je:%d\n",b);
    }
    else {
        printf("Jednaki su");
    }
    return 0;
}
