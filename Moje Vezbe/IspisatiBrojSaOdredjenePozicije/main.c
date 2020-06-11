// 9. Nakon unosa niza, pitati korisnika koji broj po redu iz niza želi da vidi, te ga
// ispisati.

#include <stdio.h>

int main()
{
    int n,i,brclana;
    printf("Unesite br clanova niza: ");
    scanf("%d",&n);
    int niz[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d",&niz[i]);
    }

    printf("Unesite zeljeni indeks u nizu: ");
    scanf("%d",&brclana);
    printf("%d",niz[brclana-1]);

    return 0;
}
