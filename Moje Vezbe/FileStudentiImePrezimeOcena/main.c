#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int ocena,i,n;
    char ime[30],prezime[30];

    FILE *izlazni;

    izlazni = fopen("izlazni.txt", "wt");
    if ( izlazni == NULL )
    {
        printf("Greska fajl 2");
        return 2;
    }

    printf("Unesite broj studenata: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++ )
    {
        scanf("%s",&ime);
        scanf("%s",&prezime);
        scanf("%d",&ocena);

        fprintf(izlazni,"%s %s - %d\n",ime,prezime,ocena);
    }

    printf("Gotovo!");
    fclose(izlazni);

    return 0;
}
