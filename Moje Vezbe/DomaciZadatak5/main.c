#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTAKMICA.h"

int main()
{
    Utakmica utakmice[64];
    Utakmica u;
    int n = 0;
    int option;

    ucitaj_sve_iz_fajla(utakmice, &n);

    while(1)
    {
        option = prikazi_meni();
        switch(option)
        {
	  case 0:
                printf("Kraj programa!\n");
                return 0;
            case 1:
                upis_utakmice(&u);
                utakmice[n] = u;
                sacuvaj_jednu_utakmicu_u_fajl(u);
                n++;
                break;
            case 2:
                ispis_svih_utakmica(utakmice, n);
                break;
            case 3:
                pretraga_po_ligi(utakmice, n);
                break;
            case 4:
                pretraga_po_stadionu(utakmice, n);
                break;
            case 5:
                pretraga_po_nazivu_kluba(utakmice, n);
                break;
            case 6:
                min_jedan_pogodak(utakmice, n);
                break;
            case 7:
                neresen_rezultat(utakmice, n);
                break;
            case 8:
                brisanje_utakmice(utakmice, &n);
                break;
            case 9:
                sacuvaj_sve_u_fajl(utakmice, n);
                break;
            case 10:
                vise_poena(utakmice, n);
                break;
            case 11:
                racunanje_golova_po_ligi(utakmice, n);
                break;
            case 12:
                statistika(utakmice, n);
                break;
            default:
            printf("Ne postoji trazena komanda!\n");
                break;
        }
    }

    return 0;
}
