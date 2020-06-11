#ifndef KANDIDATI_H_INCLUDED
#define KANDIDATI_H_INCLUDED

typedef struct
{
    char ime[64];
    float prosecna_ocena;
    int godina_studija;
} Kandidat;

void upis_kandidata(Kandidat *k);
void ispis_kandidata(Kandidat k);
int master_studije(Kandidat niz[], int n);

#endif // KANDIDATI_H_INCLUDED
