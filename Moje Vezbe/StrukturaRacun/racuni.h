#ifndef RACUNI_H_INCLUDED
#define RACUNI_H_INCLUDED

typedef struct
{
    char naziv[64];
    float iznos_racuna;
} Racun;

void upis_racuna(Racun *r);
void ispis_racuna(Racun r);
int ukupno_zaduzenje(Racun niz[], int n);

#endif // RACUNI_H_INCLUDED
