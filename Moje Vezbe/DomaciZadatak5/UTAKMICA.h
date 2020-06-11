#ifndef UTAKMICA_H_INCLUDED
#define UTAKMICA_H_INCLUDED

typedef struct
{
    char domacin[64];
    char gost[64];
    char stadion[64];
    int golovi_domacin;
    int golovi_gost;
    int liga;
}Utakmica;

void ispis_lige(const int liga);
void pretraga_po_ligi(const Utakmica u[],const int n);
void upis_utakmice(Utakmica *u);
void ispis_jedne_utakmice(const Utakmica u);
void ispis_svih_utakmica(const Utakmica u[], const int n);
int prikazi_meni();
void sacuvaj_jednu_utakmicu_u_fajl(const Utakmica u);
void sacuvaj_sve_u_fajl(const Utakmica u[], const int n);
void ucitaj_sve_iz_fajla(Utakmica u[], int *n);
void pretraga_po_stadionu(const Utakmica u[],const int n);
void pretraga_po_nazivu_kluba(const Utakmica u[], const int n);
void min_jedan_pogodak(const Utakmica u[], const int n);
void neresen_rezultat(const Utakmica u[], const int n);
void brisanje_utakmice(Utakmica u[], int *n);
int poeni(const Utakmica u[], const int n, char *tim);
void vise_poena(const Utakmica u[], const int n);
void racunanje_golova_po_ligi(const Utakmica u[], const int n);
void statistika(const Utakmica u[], const int n);

#endif // UTAKMICA_H_INCLUDED

