#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    double resenje = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
    printf("%.2lf",resenje);
    return 0;
}
