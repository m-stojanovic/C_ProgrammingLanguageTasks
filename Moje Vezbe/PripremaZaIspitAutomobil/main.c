#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AUTOMOBIL.h"

int main()
{
    Automobil automobili[64];
    Automobil a;
    int n = 0;
    int option;

    while(1)
    {
        option = prikazi_meni(); // uvek opcija je jednaka prikazi_meni i onda u switch ide ta opcija

        switch(option)
        {
            case 0:
                printf("Izlazak iz programa!\n");
                return;
            case 1:
                upis_jednog_automobila(&a); // na upis uvek ide & zbog pointera u funkciji i nista vise pored toga
                automobili[n] = a; // i onda naziv string od [ n ] da je jednak malom slovu
                n++; // i ovde povecavamo n uvek
                break;
            case 2:
                ispis_svih_automobila(automobili, n);
                break;
            case 3:
                sacuvaj_sve_automobile_u_fajl(automobili, n);
                break;
            case 4:
                ucitaj_sve_automobile_iz_fajla(automobili, &n);
                break;
            case 5:
                pretraga_po_modelu(automobili, n);  // svugde drugde ide naziv stringa i int n u zagradi
                break;
            case 6:
                pretraga_po_proizvodjacu_godistu(automobili, n);
                break;
            case 7:
                pretraga_po_gorivu(automobili, n);
                break;
            default:                        // nikad ne zaboravi default i printf u njemu i break nakon njega
                printf("Ne postoji ta komanda!\n");
                break;
        }
    }

    return 0;
}
