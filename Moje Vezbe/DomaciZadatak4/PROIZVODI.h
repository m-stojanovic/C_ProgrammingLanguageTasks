#ifndef PROIZVODI_H_INCLUDED
#define PROIZVODI_H_INCLUDED

typedef struct
{
    char naziv[64];
    char kategorija[64];
    int cena_pre_popusta;
    float popust;
}Proizvod;

void upis_proizvoda(Proizvod *p);
int nova_cena(const Proizvod p);
float usteda(const Proizvod p);
int prikazi_meni();
void ispis_jednog_proizvoda(const Proizvod p);
void ispis_svih_proizvoda(const Proizvod p[], int n);
void sacuvaj_u_fajl(const Proizvod p);
void ucitaj_sve_iz_fajla(Proizvod p[], int *n);
void ispis_iz_kategorije(const Proizvod p[], const int n);
void cena_od_do(const Proizvod p[], const int n);
void ispis_najvece_ustede(const Proizvod p[], const int n);

#endif // PROIZVODI_H_INCLUDED
