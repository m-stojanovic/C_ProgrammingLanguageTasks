#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int ch,cs,cd,cj;
    scanf("%d",&a);
    ch = a / 1000;
    cs = (a / 100) % 10;
    cd = (a / 10) % 10;
    cj = a % 10;
    if ((ch==cj) && (cs==cd)) printf("broj jeste palindrom");
    else printf("broj nije palindrom");
    return 0;
}
