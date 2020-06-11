#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcije.h"

void DodajFilm(Film *f) {
    gets(f->naslov);
    gets(f->rezija);
    scanf("%d", &f->zanr);
    getchar();
    gets(f->glumci);
    scanf("%d", &f->brojPregleda);
    scanf("%f", &f->ocena);
    scanf("%d", &f->trajanje);
    getchar();
}

void IspisiFilm(Film f) {
    printf("Naslov:        %s\n", f.naslov);
    printf("Rezija:        %s\n", f.rezija);
    printf("Zanr:          %d\n", f.zanr);
    printf("Glumci:        %s\n", f.glumci);
    printf("Broj pregleda: %d\n", f.brojPregleda);
    printf("Ocena:         %.2f\n", f.ocena);
    printf("Trajanje:      %d\n\n", f.trajanje);
}

void IspisiFilmove(Film filmovi[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        IspisiFilm(filmovi[i]);
    }
}

void ObrisiSveIzFajla() {
    FILE *file = fopen("filmovi.txt", "w");
    fclose(file);
}

void PretragaPoZanru(Film filmovi[], int n) {
    int i;
    int zanr;

    printf("Unesite zanr: ");
    scanf("%d", &zanr);

    for (i = 0; i < n; i++) {
        if (zanr == filmovi[i].zanr) {
            IspisiFilm(filmovi[i]);
        }
    }
}

void FullPretraga(const Film filmovi[], const int n) {
    int i;
    char naziv[30];
    int brojPregleda;

    printf("Unesite naziv filma: ");
    gets(naziv);
    printf("Unesite broj pregleda: ");
    scanf("%d", &brojPregleda);
    getchar();

    for (i = 0; i < n; i++) {
        if (strcmp(naziv, filmovi[i].naziv) == 0 && filmovi[i].brojPregleda >= brojPregleda) {
            IspisiFilm(filmovi[i]);
        }
    }
}

void SacuvajFilmoveUFajl(const Film filmovi[100], const int n) {
    FILE *file = fopen("filmovi.txt", "w");
    int i;

    if (file == NULL) {
        printf("Greska sa ucitavanjem fajla!\n");
        return;
    }

    for (i = 0; i < n; i++) {
        fprintf(file, "%s\n%s\n%d\n%s\n%d\n%.2f\n%d\n",
            filmovi[i].naslov, filmovi[i].rezija, filmovi[i].zanr,
            filmovi[i].glumci, filmovi[i].brojPregleda, filmovi[i].ocena, filmovi[i].trajanje);
    }

    printf("Filmovi su sacuvani u fajl!\n");
    fclose(file);
}
