#include <stdio.h>
#include <stdlib.h>
// DOMACI ZADATAK OP - MILOS STOJANOVIC 2318s - mstojanovic2318s@raf.rs
int main()
{
    int poen,i;
    int brojstudenata = 0;
    int poloziloStudenata = 0;
    int poloziliZbir = 0;
    int ukupanZbir = 0;
    int maxPoena = 0;
    int petica = 0, sestica = 0, sedmica = 0, osmica = 0, devetka = 0, desetka = 0;


    for( i = 0; poen != -1; i++ )
    {
        printf("Unesite ocenu studenta: ");
        scanf("%d",&poen);

        if ( poen >= 0  && poen <= 100)
        {
            brojstudenata++;
            ukupanZbir = ukupanZbir + poen;
        }

        if ( poen >= 51 )
        {
            poloziloStudenata++;
            poloziliZbir = poloziliZbir + poen;
        }

        if ( poen > maxPoena )
        {
            maxPoena = poen;
        }

        if ((poen <=-2) || (poen >= 101))
        {
            printf("Ocena nece biti uvazena zbog pogresnog unosa poena! Molim unesite odgovarajuci broj poena u sledecem koraku!\n");
        }

        if ((poen >= 0 ) && (poen <= 50))
        {
            petica++;
        }
        else if ((poen >= 51 ) && (poen <= 60))
        {
            sestica++;
        }
        else if ((poen >= 61 ) && (poen <= 70))
        {
            sedmica++;
        }
        else if ((poen >= 71 ) && (poen <= 80))
        {
            osmica++;
        }
        else if ((poen >= 81 ) && (poen <= 90))
        {
            devetka++;
        }
        else
        {
            desetka++;
        }
    }

    float ukupanProsek = (float)ukupanZbir / brojstudenata;
    float poloziliProsek = (float)poloziliZbir / poloziloStudenata;

    printf("Izaslo na ispit: %d\n", brojstudenata);
    printf("Polozilo: %d\n",poloziloStudenata);
    printf("Broj pojedinacnih ocena: desetka - %d, devetka - %d, osmica - %d, sedmica - %d, sestica - %d, petica - %d\n", desetka, devetka, osmica, sedmica, sestica, petica);
    printf("Najvise poena: %d\n",maxPoena);
    printf("Prosek svih poena: %.2f\n",ukupanProsek);
    printf("Prosek poena koji su polozili: %.1f\n", poloziliProsek);

    return 0;
}
