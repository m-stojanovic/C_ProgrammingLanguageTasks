#include <stdio.h>
#include <stdlib.h>
// 4. Implementirati funkciju void swap(int* x, int* y) koja zamenjuje vrednosti dva prosleđena
// broja.
void zamena(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Pre: x = %d | y = %d\n",x,y);
    zamena(&x,&y);
    printf("Posle: x = %d | y = %d",x,y);
    return 0;
}
