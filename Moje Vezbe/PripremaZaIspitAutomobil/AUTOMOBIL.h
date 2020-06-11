#ifndef AUTOMOBIL_H_INCLUDED
#define AUTOMOBIL_H_INCLUDED

typedef struct
{
    char proizvodjac[64];
    char model[64];
    int godiste;
    char gorivo[64];
    float cena;
}Automobil;

void upis_jednog_automobila(Automobil *a);
void upis_jednog_automobila(Automobil *a);
void ispis_svih_automobila(const Automobil a[], const int n);
void sacuvaj_automobil_u_fajl(const Automobil a);
void sacuvaj_sve_automobile_u_fajl(const Automobil a[], const int n);
void ucitaj_sve_automobile_iz_fajla(Automobil a[], int *n);
int prikazi_meni();
void pretraga_po_modelu(const Automobil a[], const int n);
void pretraga_po_proizvodjacu_godistu(const Automobil a[], const int n);
void pretraga_po_gorivu(const Automobil a[], const int n);

#endif // AUTOMOBIL_H_INCLUDED
