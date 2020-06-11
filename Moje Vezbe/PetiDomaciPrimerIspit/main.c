#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcije.h"
/*
Napraviti program u obliku Code::Blocks projekta koji će da služi kao interfejs za RAFlix
filmski streaming servis. U programu će u svakom trenutku biti do 100 filmova, a svaki od njih ima:
● Naslov (tekst)
● Režija (tekst)
● Žanr (brojčano, odrediti unaprijed 5 žanrova po brojevima)
● Glumci (duži tekst, svi zajedno)
● Broj pregleda (od strane trenutnog korisnika)
● Ocjena
● Trajanje (u minutama)
Program treba da radi po sistemu menija u beskonačnoj petlji, na početku učitavajući
podatke iz datoteke, a zatim omogućavajući:
● Dodavanje novih filmova
● Ispis svih postojećih filmova
● Brisanje filmova
● Tekstualna pretraga (termin se traži u sva tri tekstualna polja)
● Pretraga po žanru
● Snimanje podataka nazad u fajl (može biti automatsko po izlasku)
● Gledanje filma – gdje za odabrani film uvećavamo broj pregleda i ispisujemo preporuku šta
sljedeće gledati, što treba da bude najbolji (po ocjeni) film iz istog žanra kojeg korisnik još
nije gledao (ima 0 pregleda), u slučaju da se ne nađe, ispisati da nema preporuka.
*/
int main()
{
    int option;
    Film filmovi[100];
    int n = 0;

    while (1) {
        printf("Izaberite opciju: ");
        scanf("%d", &option);
        getchar();

        if (option == 0) {
            printf("Kraj programa!\n");
            return 0;
        } else if (option == 1) {
            printf("Koliko filmova zelis? ");
            scanf("%d", &n);
            getchar();
            int i = 0;

            for (i = 0; i < n; i++) {
                Film f;
                DodajFilm(&f);
                filmovi[i] = f;
            }
        } else if (option == 2) {
            IspisiFilmove(filmovi, n);
        } else if (option == 3) {
            SacuvajFilmoveUFajl(filmovi, n);
        }
    }

    return 0;
}
