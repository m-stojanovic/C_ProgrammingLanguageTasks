#include <stdio.h>
#include <math.h>

int main()
{

   int i,elementi, suma=0;
   int niz[100];
   printf("Unesi duzinu niza: ");
   scanf("%d",&elementi);

   printf("Unesi elemente niza: \n");
   for( i = 0; i < elementi; i++ )
   {
        scanf("%d",&niz[i]);
       if ( niz[i] % 4 == 0)
       {
           suma = suma + niz[i];
       }
    }
   printf("Suma clanova niza = %d", suma);

   return 0;
}
