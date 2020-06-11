#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GSP.h"

int main()
{
    GSP vozila[126];
    GSP g;
    int n = 0;

    while(1)
    {
        int option = prikazi_meni();

        switch(option)
        {
            case 0:
                printf("Kraj Programa!");
                return 0;
            case 1:
                upis_vozila(&g);
                vozila[n++] = g;
                sacuvaj_jedno_vozilo_u_fajl(g);
                break;
            case 2:
                ispis_svih_vozila(vozila, n);
                break;
            case 3:
                sacuvaj_sva_vozila_u_fajl(vozila, n);
                break;
            case 4:
                ucitaj_sva_vozila_iz_fajla(vozila, &n);
                break;
            case 5:
                pretraga_po_pocetnoj_krajnoj_stanici(vozila, n);
                break;
            case 6:
                ispis_veceg_intervala(vozila, n);
                break;
            case 7:
                ispis_odredjenog_tipa_vozila(vozila, n);
                break;
            default:
                printf("Pogresan unos!");
                break;
        }
    }

    return 0;
}
