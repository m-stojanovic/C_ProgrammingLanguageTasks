#include <stdio.h>
#include <stdlib.h>
//11. Provjeriti da li su dva unijeta niza jednaka (imaju jednake elemente na jednakim
//    pozicijama), te ako nisu, ispisati na kojoj se poziciji “razilaze”.
int main()
{
    int n,i;
    printf("Unesite duzinu prvog i drugog niza: ");
    scanf("%d",&n);

    int niz1[n];
    int niz2[n];

    printf("Uneti clanove prvog niza: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&niz1[i]);
    }

    printf("Uneti clanove drugog niza: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&niz2[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(niz1[i] != niz2[i])
        {
            printf("Nizovi su razliciti na poziciji: %d",i);
            break;
        }
        else printf("Nizovi se ne razilaze!");
    }
    return 0;
}
