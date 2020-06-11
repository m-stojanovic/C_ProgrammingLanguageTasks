#include <stdio.h>
#include <math.h>

int main ()
{
    int i,n,k,suma=0,cifraJedinica;
    scanf("%d%d",&n,&k);
    for (i=n; i<=k; i++ )
   {
        cifraJedinica = i % 10;
        if ( cifraJedinica == 8 )
        {
                suma = suma + i;
        }
   }
        printf("%d\n",suma);
    return 0;
}

//main()
//{
//    int k,n;
//    float suma;
//
//    printf("Od broja: ");
//    scanf("%d", &k);
//    printf("Do broja: ");
//    scanf("%d", &n);
//
//    suma = 0;
//
//    for(;k<=n;k++)
//            if(k % 10 == 8)
//                    suma+=k;
//    printf("Suma je: %f", suma);
//
//    getchar();
//}
