#include <stdio.h>
#include <stdlib.h>
//Napisati program koji sadrži funkciju koja računa stepen cijelog broja, poput ugrađene pow()
//funkcije (naravno, bez oslanjanja na nju). Iskoristiti je tako što će korisnik da unese bazu i
//eksponent, nakon čega će biti ispisan rezultat.

int stepen_broja(int x,int n)
{
    int i;
    int broj = 1;
    for(i = 0; i < n; i++)
    {
        broj = x * broj;
    }

    return broj;

}
int main()
{
    int x,n;
    scanf("%d %d", &x, &n);

    printf("%d^%d = %d",x,n,stepen_broja(x,n));

    return 0;
}
