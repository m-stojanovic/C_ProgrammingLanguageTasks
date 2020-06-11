#include <stdio.h>
#include <stdlib.h>
//Napisati program koji sadrži funkciju koja za data dva dvocifrena broja ispituje da li su im cifre
//obrnute (npr. 47 i 74), vraćajući tačno/netačno odgovor kao rezultat. Iskoristiti je tako što će
//korisnik da unese dva broja i na osnovu rezultata funkcije ispisati odgovarajuću poruku. Program
//prekinuti prije provjere ako uneseni brojevi nisu dvocifreni.
int provera_cifri(int x, int y)
{
        if(x < 10 && x > 99 && y < 10 && y > 99)
        {
            return 0;
        }
        if(x % 10 == y / 10 && x / 10 == y % 10)
        {
            return 1;
        }
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(provera_cifri(x,y) == 1)
    {
        printf("%d i %d JESU rotirani!\n", x, y);
    }
    else
    {
        printf("%d i %d NISU rotirani!\n", x, y);
    }

    return 0;
}
