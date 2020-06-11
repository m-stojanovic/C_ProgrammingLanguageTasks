// 10. Nakon unosa niza, pitati korisnika koji broj želi tražiti, a zatim ispisati koliko se
// puta taj broj pojavljuje u nizu.

#include <stdio.h>

int main()
{
    int n,i,broj,brojac = 0;
    printf("Unesite br clanova niza: ");
    scanf("%d",&n);
    int niz[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }
    printf("Koji broj trazite?\n");
    scanf("%d",&broj);
    for(i = 0; i < n; i++)
    {
        if ( broj == niz[i])
        {
            brojac++;
        }
    }
    printf("Pojavljuje se %d puta!",brojac);
    return 0;
}
