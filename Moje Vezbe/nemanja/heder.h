#ifndef HEDER_H_INCLUDED
#define HEDER_H_INCLUDED

typedef struct
{
    char naziv[64];
    char proizvodjac[64];
    int cena;
    int stanje_lager;
    char vrsta[64];
} Market;

void unos_robe(Market *m);
void ispis_jednog_proizvoda(const Market m);
void ispis_svih_proizvoda(const Market m[], const int n);
int prikazi_meni();
void sacuvaj_proizvod_u_fajl(const Market m);
void sacuvaj_sve_u_fajl(const Market m[], const int n);
void ucitaj_sve_iz_fajla(Market m[], int *n);
void pretraga_po_artiklu(const Market m[], const int n);
void najjeftiniji_proizvod_zadate_vrste(const Market m[], const int n);
void za_nabavku(const Market m[], const int n);

#endif // HEDER_H_INCLUDED
// Milos Stojanovic S23/18
