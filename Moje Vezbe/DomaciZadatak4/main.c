#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PROIZVODI.h"

int main()
{
    Proizvod proizvodi[64];
    Proizvod p;
    int n = 0;
    int option;


    ucitaj_sve_iz_fajla(proizvodi, &n);


    while(1)
    {
        option = prikazi_meni();

        switch(option)
        {
            case 0:
                printf("Kraj programa!\n");
                return 0;
            case 1:
                upis_proizvoda(&p);
                proizvodi[n] = p;
                sacuvaj_u_fajl(p);
                n++;
                break;
            case 2:
                ispis_iz_kategorije(proizvodi, n);
                break;
            case 3:
                cena_od_do(proizvodi, n);
                break;
            case 4:
                ispis_najvece_ustede(proizvodi, n);
                break;
            default:
                printf("Nepoznata komanda!\n");
                break;
        }
    }

    return 0;
}
