#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PROIZVODI.h"

void upis_proizvoda(Proizvod *p)
{
    printf("Naziv proizvoda: ");
    gets(p->naziv);
    printf("Kategorija: ");
    gets(p->kategorija);
    printf("Cena pre popusta: ");
    scanf("%d",&p->cena_pre_popusta);
    printf("Popust: ");
    scanf("%f",&p->popust);
    getchar();
}

int nova_cena(const Proizvod p)
{
    int nova;

    nova = p.cena_pre_popusta - ( p.cena_pre_popusta * p.popust );

    return nova;
}

float usteda(const Proizvod p)
{
    float usteda;

    usteda = p.cena_pre_popusta * p.popust;

    return usteda;
}

int prikazi_meni()
{
    int option;

    printf("\n0. Kraj!\n");
    printf("1. Dodaj novi niz\n");
    printf("2. Ispisi sve iz kategorije\n");
    printf("3. Ispisi sve u opsegu od - do\n");
    printf("4. Proizvod sa najvecom ustedom\n");

    printf("Odaberi: \n");
    scanf("%d",&option);
    getchar();

    return option;
}

void ispis_jednog_proizvoda(const Proizvod p)
{
    printf("Naziv: %s\n",p.naziv);
    printf("Kategorija: %s\n",p.kategorija);
    printf("Cena pre popusta: %d\n",p.cena_pre_popusta);
    printf("Popust: %.2f\n",p.popust);
    printf("Cena: %d\n",nova_cena(p));
    printf("Usteda: %.2f\n\n",usteda(p));
}

void ispis_svih_proizvoda(const Proizvod p[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        ispis_jednog_proizvoda(p[i]);
    }
}

void sacuvaj_u_fajl(const Proizvod p)
{
    FILE *file = fopen("proizvodi.txt", "a");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    fprintf(file, "%s\n", p.naziv);
    fprintf(file, "%s\n", p.kategorija);
    fprintf(file, "%d\n", p.cena_pre_popusta);
    fprintf(file, "%.2f\n", p.popust);

    printf("Uspesno ste sacuvali u fajl!\n");
    fclose(file);
}

void ucitaj_sve_iz_fajla(Proizvod p[], int *n)
{
    int i = 0;
    FILE *file = fopen("proizvodi.txt", "r");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    while(!feof(file))
    {
        fgets(p[i].naziv, 64, file);
        fgets(p[i].kategorija, 64, file);
        fscanf(file, "%d", &p[i].cena_pre_popusta);
        fscanf(file, "%f\n", &p[i].popust);

        p[i].naziv[strlen(p[i].naziv) - 1] = '\0';
        p[i].kategorija[strlen(p[i].kategorija) - 1] = '\0';

        i++;
    }

    *n = i - 1;
    fclose(file);
}

void ispis_iz_kategorije(const Proizvod p[], const int n)
{
    int i;
    int brojac = 0;
    char po_kategoriji[64];
    printf("Unesite kategoriju: ");
    gets(po_kategoriji);

    for(i = 0; i < n; i++)
    {
        if(strcmp(p[i].kategorija, po_kategoriji) == 0)
        {
            brojac++;
            ispis_jednog_proizvoda(p[i]);
        }
    }
    if (brojac == 0)
    {
        printf("Ne postoji trazena kategorija!\n");
    }
}

void cena_od_do(const Proizvod p[], const int n)
{
    int i;
    int brojac = 0;
    int od_cene;
    int do_cene;

    printf("Unesite trazeni razmak cena: \n");
    scanf("%d %d", &od_cene, &do_cene);

    for(i = 0; i < n; i++)
    {
        if(nova_cena(p[i]) >= od_cene && nova_cena(p[i]) <= do_cene)
        {
            brojac++;
            ispis_jednog_proizvoda(p[i]);
        }
    }
    if( brojac == 0)
    {
        printf("Ne postoji trazena kategorija!\n");
    }

}

void ispis_najvece_ustede(const Proizvod p[], const int n)
{
    int i;
    float max = 0;
    float jedna_usteda;
    int j = -1;
    for(i = 0; i < n; i++)
    {
        jedna_usteda = usteda(p[i]);
        if(jedna_usteda > max)
        {
            max = jedna_usteda;
            j = i;
        }
    }

    ispis_jednog_proizvoda(p[j]);
}
