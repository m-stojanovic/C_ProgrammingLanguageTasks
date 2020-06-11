#ifndef STUDENTI_H_INCLUDED
#define STUDENTI_H_INCLUDED

typedef struct
{
    char ime[64];
    char prezime[64];
    char smer[64];
    int broj_indeksa;
    int godina_upisa;
} Student;

void upisivanjeStudenata(Student string[256], int n);
void ispisavanjeStudenata(Student string[256], int u);

#endif // STUDENTI_H_INCLUDED
