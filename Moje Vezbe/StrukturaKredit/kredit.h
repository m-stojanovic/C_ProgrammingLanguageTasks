#ifndef KREDIT_H_INCLUDED
#define KREDIT_H_INCLUDED

typedef struct
{
    int rata;
    int iznos;
} Kredit;

int najveca_mesecna_rata(Kredit niz[], int n);
void ispis_kredita(Kredit k);
void ispis_kredita(Kredit k);

#endif // KREDIT_H_INCLUDED
