#ifndef STUDENTI_H_INCLUDED
#define STUDENTI_H_INCLUDED

typedef struct
{
    char naziv[64];
    float prosecna_ocena;
} Student;

void ispis_studenata(Student s);
void ispis_studenata(Student s);
float najveca_prosecna_ocena(Student niz[], int n);

#endif // STUDENTI_H_INCLUDED
