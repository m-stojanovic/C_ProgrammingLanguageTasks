#include <stdio.h>
#include <stdlib.h>
// 1. Napisati program koji sadrži funkciju koja za dati broj proverava koliko ga je uzastopno puta
// potrebno pomnožiti sa 3 da bi postao veći od 100 000 i taj broj množenja vraća kao rezultat.
// Iskoristiti je tako što će korisnik da unese broj, nakon čega će biti ispisan rezultat provere.
int provera(int n)
{
    int i;
    int cnt = 1; // da bi postao veci moramo da krenemo od 1
    for(i = 0; i < 100000; i++)
    {
        if(n < 100000)
        {
            n = n * 3;
            cnt++;
        }
    }

    return cnt;
}


int main()
{
    int n;
    scanf("%d",&n);

    printf("Rezultat je: %d",provera(n));

    return 0;
}
