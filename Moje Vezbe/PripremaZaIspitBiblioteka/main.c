#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BIBLIOTEKA.h"

int main()
{
    Knjiga knjige[64];
    Knjiga k;
    int n = 0;
    int option;



    while(1)
    {
        option = prikazi_meni();

        switch(option)
        {
            case 0:
                printf("Kraj programa!\n");
                return 0;
            case 1:
                upis_knjige(&k);
                knjige[n] = k;
                sacuvaj_knjigu_u_fajl(k);
                n++;
                break;
            case 2:
                ispis_svih_knjiga(knjige, n);
                break;
            case 3:
                sacuvaj_sve_u_fajl(knjige, n);
                break;
            case 4:
                pretraga_po_autoru(knjige, n);
                break;
            case 5:
                iznajmljivanje(knjige, n);
                break;
            case 6:
                vracanje(knjige, n);
                break;
            case 7:
                pretraga_po_zanru(knjige, n);
                break;
            case 8:
                ucitaj_sve_iz_fajla(knjige, &n);
                break;
            default:
                printf("Ne postoji ta komanda!\n");
                break;
        }
    }

    return 0;
}
