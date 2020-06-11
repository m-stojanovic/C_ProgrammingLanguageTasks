#ifndef IZVESTAJ_H_INCLUDED
#define IZVESTAJ_H_INCLUDED

typedef struct
{
    char grad[64];
    float temperatura;
} Izvestaj;

void upisivanjeIzvestaja(Izvestaj *str);
void ispisavanjeIzvestaja(Izvestaj *str);
float prosecnaTemperatura(Izvestaj str[], int n);

#endif // IZVESTAJ_H_INCLUDED
