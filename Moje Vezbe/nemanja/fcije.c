#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heder.h"
// Milos Stojanovic S23/18

void unos_robe(Market *m)
{
    printf("Naziv: ");
    gets(m->naziv);
    printf("Proizvodjac: ");
    gets(m->proizvodjac);
    printf("Cena: ");
    scanf("%d", &m->cena);
    printf("Stanje: ");
    scanf("%d", &m->stanje_lager);
    getchar();
    printf("Vrsta: ");
    gets(m->vrsta);
}

void ispis_jednog_proizvoda(const Market m)
{
    printf("Naziv: %s\n", m.naziv);
    printf("Proizvodjac: %s\n", m.proizvodjac);
    printf("Cena %d\n", m.cena);
    printf("Stanje: %d\n", m.stanje_lager);
    printf("Vrsta: %s\n\n", m.vrsta);
}

void ispis_svih_proizvoda(const Market m[], const int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        ispis_jednog_proizvoda(m[i]);
    }
}

int prikazi_meni()
{
    int option;

    printf("\n0.  Kraj\n");
    printf("1. Dodaj artikal\n");
    printf("2. Ispisi artikle\n");
    printf("3. Sacuvaj sve artikle u fajl\n");
    printf("4. Ucitavanje svih artikala iz fajla\n");
    printf("5. Pretraga artikala po nazivu\n");
    printf("6. Pretraga najjeftinijeg proizvoda zadate vrste\n");
    printf("7. Ispis artikala koje treba nabaviti\n");

    printf("Izaberite opciju: ");
    scanf("%d", &option);
    getchar();

    return option;
}

void sacuvaj_proizvod_u_fajl(const Market m)
{
    FILE *file = fopen("ulaz.txt", "a");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    fprintf("%s\n", m.naziv);
    fprintf("%s\n", m.proizvodjac);
    fprintf("%d\n", m.cena);
    fprintf("%d\n", m.stanje_lager);
    fprintf("%s\n\n", m.vrsta);

    fclose(file);
}

void sacuvaj_sve_u_fajl(const Market m[], const int n)
{
    FILE *file = fopen("ulaz.txt", "w");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    int i;
    for(i = 0; i < n; i++)
    {
        fprintf("%s\n", m[i].naziv);
        fprintf("%s\n", m[i].proizvodjac);
        fprintf("%d\n", m[i].cena);
        fprintf("%d\n", m[i].stanje_lager);
        fprintf("%s\n", m[i].vrsta);
    }

  fclose(file);
}

void ucitaj_sve_iz_fajla(Market m[], int *n)
{
    int i = 0;
    FILE *file = fopen("ulaz.txt", "r");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    while(!feof(file))
    {
        fgets(m[i].naziv, 64, file);
        fgets(m[i].proizvodjac, 64, file);
        fscanf(file, "%d", &m[i].cena);
        fgetc(file);
        fscanf(file, "%d", &m[i].stanje_lager);
        fgetc(file);
        fgets(m[i].vrsta, 64, file);

        m[i].naziv[strlen(m[i].naziv) - 1] = '\0';
        m[i].proizvodjac[strlen(m[i].proizvodjac) - 1] = '\0';
        m[i].vrsta[strlen(m[i].vrsta) - 1] = '\0';

        i++;
    }

    *n = i - 1;
    fclose(file);
}

void pretraga_po_artiklu(const Market m[], const int n)
{
    char artikal;
    int i;
    printf("Unesite artikall: ");
    gets(artikal);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].naziv, artikal) == 0)
        {
            ispis_jednog_proizvoda(m[i]);
        }
    }
}

void najjeftiniji_proizvod_zadate_vrste(const Market m[], const int n)
{
    int i;
    int min = m[0].cena;
    char vrsta_min[64];
    printf("Unesite trazenu vrstu: ");
    gets(vrsta_min);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].vrsta, vrsta_min) == 0)
        {
            if(min < m[i].cena)
            {
                min = m[i].cena;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(min == m[i].cena)
        {
            ispis_jednog_proizvoda(m[i]);
        }
    }
}

void za_nabavku(const Market m[], const int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(m[i].stanje_lager == 0)
        {
            ispis_jednog_proizvoda(m[i]);
        }
    }
}

void obrisi_sve_artikle(const Market m[], const int n)
{
    FILE *file = fopen("ulaz.txt", "w");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    printf("Svi artikli su obrisani!\n");
}

void obrisati_zadati_artikal(Market m[], int n)
{

}
