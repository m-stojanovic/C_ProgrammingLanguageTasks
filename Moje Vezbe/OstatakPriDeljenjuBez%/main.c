#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int rezultat, ostatak;
    rezultat = a / b;
    ostatak = a - ( b * rezultat );
    printf("%d",ostatak);
    return 0;
}
/*
int main()
{
  int a,b;
    scanf("%d %d", &a,&b);
    while (a-b>=0) a=a-b;
    printf("%d ", a);
    return 0;
}
*/
