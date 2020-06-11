#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int osnova = 1;
    int n,cf,cifra,noviBroj=0;
    scanf("%d%d",&n,&cf);
    while (n>0)
    {
        cifra = n % 10;
        n = n / 10;
        if (cifra != cf )
        {
            noviBroj = noviBroj + osnova*cifra;
            osnova = osnova * 10;
        }
    }
    printf("%d",noviBroj);
    return 0;
}
/*

Unose se dva cela broja N i CF. Broj koji se ispisuje na kraju jeste n1, i mora se inicijalizovati (n1=0).
Promenljiva osnova predstavlja trenutnu vrednost težine. U while ciklusu koji će se vrtiti onoliko puta koliko
broj N ima cifara, ispituje se svaka cifra C broja N (od cifre sa najmanjom težinom do cifre sa najvećom težinom).
Ukoliko je ta cifra C različita od unetog broja CF tada se broju n1 dodaje c*osnova
(osnova predstavlja težinu pozicije na kojoj se cifra c nalazila u broju n; osnova je stepen broja 10).
Na standardnom izlazu potrebno je ispisati novodobijeni broj n1.

*/
