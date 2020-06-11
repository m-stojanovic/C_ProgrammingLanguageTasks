#ifndef BIBLIOTEKA_H_INCLUDED
#define BIBLIOTEKA_H_INCLUDED

typedef struct
{
    char naslov[64];
    char autor[64];
    int godina;
    int zanr;
    int stranica;
    char ISBN[64];
    int broj_primeraka;
} Knjiga;

void upis_knjige(Knjiga *k);
void ispis_jedne_knjige(const Knjiga k);
void ispis_svih_knjiga(const Knjiga k[], const int n);
void sacuvaj_knjigu_u_fajl(const Knjiga k);
void sacuvaj_sve_u_fajl(const Knjiga k[], const int n);
void ucitaj_sve_iz_fajla(Knjiga k[], int *n);
int prikazi_meni();
void pretraga_po_autoru(const Knjiga k[], const int n);
void iznajmljivanje(Knjiga k[], const int n);
void vracanje(Knjiga k[], const int n);
void pretraga_po_zanru(const Knjiga k[], const int n);

#endif // BIBLIOTEKA_H_INCLUDED
