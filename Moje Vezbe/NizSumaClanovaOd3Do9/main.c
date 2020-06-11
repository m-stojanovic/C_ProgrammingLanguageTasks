#include <stdio.h>
#include <math.h>

int main()
{

   int i,elementi, suma=0;
   int niz[10];
   printf("Unesi duzinu niza: ");
   scanf("%d",&elementi);
   printf("Unesi elemente niza: \n");
   for( i = 0; i < elementi; i++ )
   {
        scanf("%d",&niz[i]);
   }
   for ( i = 3; i < 10; i++ )
   {
            suma = suma + niz[i];
   }
   printf("\nSuma clanova niza = %d", suma);

   return 0;
}
