#ifndef UTAKMICA_H_INCLUDED
#define UTAKMICA_H_INCLUDED

typedef struct
{
    int golovi_domacin;
    int golovi_gosti;
} Utakmica;

void upis_utakmica(Utakmica u[], int n);
void ispis_utakmica(Utakmica u[], int n);
int bodovi_domacin(Utakmica niz[], int n);

#endif // UTAKMICA_H_INCLUDED
