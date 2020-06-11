#ifndef GSP_H_INCLUDED
#define GSP_H_INCLUDED

typedef struct
{
    int ID;
    char pocetna_stanica[64];
    char krajna_stanica[64];
    int interval;
    char naziv[64];
    char tip_vozila[64];
}GSP;

void upis_vozila(GSP *g);
void ispis_vozila(const GSP g);
void ispis_svih_vozila(const GSP g[], const int n);
void sacuvaj_jedno_vozilo_u_fajl(const GSP g);
void sacuvaj_sva_vozila_u_fajl(const GSP g[], const int n);
void ucitaj_sva_vozila_iz_fajla(GSP g[], int *n);
int prikazi_meni();
void pretraga_po_pocetnoj_krajnoj_stanici(const GSP g[],const int n);
void ispis_veceg_intervala(const GSP g[], const int n);
void ispis_odredjenog_tipa_vozila(const GSP g[], const int n);


#endif // GSP_H_INCLUDED
