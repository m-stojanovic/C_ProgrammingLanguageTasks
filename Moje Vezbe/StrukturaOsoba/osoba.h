#ifndef OSOBA_H_INCLUDED
#define OSOBA_H_INCLUDED

typedef struct
{
    char ime[64];
    float tezina;
    float visina;
} Osobe;

void upisivanjeOsoba(Osobe *str);
void ispisivanjeOsoba(Osobe *str);
float MinBMI(Osobe niz[], int n);
float BMI(float tezina, float visina);
int IndexBMI(Osobe niz[], int n);

#endif // OSOBA_H_INCLUDED
