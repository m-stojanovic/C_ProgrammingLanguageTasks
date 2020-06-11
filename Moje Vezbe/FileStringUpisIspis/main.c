#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[200];
    FILE *ulazni;

    ulazni = fopen("Roman.txt", "rt");
    if(ulazni == NULL)
    {
        printf("Greska pri otvaranju fajla!");
        return 1;
    }

    while(!feof(ulazni))
    {
        if( fgets(tekst, 200, ulazni)==NULL )
            {
                break; //Zavisno od sadržaja fajla, feof će možda da “kasni” jedno čitanje, zato možemo provjeriti
                       // da li je fgets vratio NULL, što znači da čitanje nije uspjelo.
            }
        printf("%s",tekst);
    }

    fclose(ulazni);

    return 0;
}
