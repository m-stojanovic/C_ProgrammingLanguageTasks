#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heder.h"
// Milos Stojanovic S23/18

int main()
{
    Market artikli[64];
    Market m;
    int n = 0;
    int option;

    while(1)
    {
        option = prikazi_meni();

        switch(option)
        {
            case 0:
                printf("Kraj!!");
                return 0;
            case 1:
                unos_robe(&m);
                artikli[n++] = m;
                sacuvaj_proizvod_u_fajl(m);
                break;
            case 2:
                ispis_svih_proizvoda(artikli, n);
                break;
            case 3:
                sacuvaj_sve_u_fajl(artikli, n);
                break;
            case 4:
                ucitaj_sve_iz_fajla(artikli, &n);
                break;
            case 5:
                pretraga_po_artiklu(artikli, n);
                break;
            case 6:
                najjeftiniji_proizvod_zadate_vrste(artikli, n);
                break;
            case 7:
                za_nabavku(artikli, n);
                break;
            default:
                printf("Ne postoji uneta komanda!\n");
                break;
        }
    }
    return 0;
}

//    printf("7.  Obrisi sve artikle iz fajla\n");
//    printf("8.  Pretraga artikala po nazivu, proizvodjacu ili vrsti\n");
//    printf("9.  Pretraga artikala po ceni\n");
//    printf("10. Sortiraj artikle po nazivu\n");
//    printf("11. Sortiraj artikle po ceni\n");
//    printf("12. Pretraga najjeftinijeg proizvoda zadate vrste\n");
//    printf("13. Ispis artikala koje treba nabaviti\n");
//    printf("14. Obrisi zadati artikal iz fajla\n");
