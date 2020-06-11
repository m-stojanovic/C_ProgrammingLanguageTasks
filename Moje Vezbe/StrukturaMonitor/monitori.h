#ifndef MONITORI_H_INCLUDED
#define MONITORI_H_INCLUDED

typedef struct
{
    char naziv[64];
    float visina;
    float sirina;
} Monitor;

void upis_monitora(Monitor *m);
void ispis_monitora(Monitor m);
float dijagonala(float sirina, float visina);
float max_dijagonala(Monitor niz[], int n);
int dijagonala_index(Monitor niz[], int n);

#endif // MONITORI_H_INCLUDED
