#include <stdio.h>
#include <math.h>

int main ()
{
    int i,n,suma = 0,faktorijel = 1;
    scanf("%d",&n);
    for( i = 1; i <= n; i++ )
    {
        faktorijel = faktorijel * i; //Ako n=5 Faktorijel broja 5: 5*4*3*2*1 + broja 4: 4*3*2*1 + broja 3: 3*2*1 ITD.
        suma = suma + faktorijel; // Faktorijel broja 5 + broja 4 + broja 3 + broja 2 + broja = SUMA.
    }

    printf("%d",suma);
    return 0;
}
