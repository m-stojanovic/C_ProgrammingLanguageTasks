#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i, proizvod, n;
   printf("Unesi broj elemenata niza: ");
   scanf("%d", &n);
   int niz[n];        // rezervisanje prostora za niz - ARRAY

   for ( i = 0; i < n; i++ ) {
       scanf ("%d", &niz[i]);    // ulaz clanova niza
   }

   proizvod = 1;    // pocetna vrijednsot proizvoda
   for ( i = 0; i < n; i++ )
   {
            proizvod = proizvod * niz[i];
   }
   printf("\nProizvod clanova niza = %d", proizvod);

   return 0;
}
