#ifndef FUNKCIJE_H_INCLUDED
#define FUNKCIJE_H_INCLUDED

typedef struct {
    char naslov[30];
    char rezija[30];
    int zanr;
    char glumci[100];
    int brojPregleda;
    float ocena;
    int trajanje;
} Film;

void DodajFilm(Film *f);
void IspisiFilm(Film f);
void IspisiFilmove(Film filmovi[], int n);
void ObrisiSveIzFajla();
void PretragaPoZanru(Film filmovi[], int n);
void SacuvajFilmoveUFajl(const Film filmovi[100], const int n);

#endif // FUNKCIJE_H_INCLUDED
