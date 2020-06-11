#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BIBLIOTEKA.h"

// Unos sa tastature i ispis podataka (naslov, autor, godina, žanr [broj], broj stranica, ISBN,
// broj primjeraka) [4 bodova]

void upis_knjige(Knjiga *k)
{
    printf("Naslov: ");
    gets(k->naslov);
    printf("Autor: ");
    gets(k->autor);
    printf("Godina: ");
    scanf("%d",&k->godina);
    printf("Zanr: ");
    scanf("%d",&k->zanr);
    printf("Broj stranica: ");
    scanf("%d",&k->stranica);
    getchar();
    printf("ISBN: ");
    gets(k->ISBN);
    printf("Broj primeraka: ");
    scanf("%d",&k->broj_primeraka);
    getchar();
}

void ispis_jedne_knjige(const Knjiga k)
{
    printf("Naslov: %s\n", k.naslov);
    printf("Autor: %s\n", k.autor);
    printf("Godina: %d\n", k.godina);
    printf("Zanr: %d\n", k.zanr);
    printf("Broj stranica: %d\n", k.stranica);
    printf("ISBN: %s\n", k.ISBN);
    printf("Broj primeraka: %d\n\n", k.broj_primeraka);
}

void ispis_svih_knjiga(const Knjiga k[], const int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        ispis_jedne_knjige(k[i]);
    }
}

//Učitavanje podataka iz fajla i snimanje u fajl [6 bodova]

void sacuvaj_knjigu_u_fajl(const Knjiga k)
{
    FILE *file = fopen("biblioteka.txt", "a");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    fprintf(file, "%s\n", k.naslov);
    fprintf(file, "%s\n", k.autor);
    fprintf(file, "%d\n", k.godina);
    fprintf(file, "%d\n", k.zanr);
    fprintf(file, "%d\n", k.stranica);
    fprintf(file, "%s\n", k.ISBN);
    fprintf(file, "%d\n", k.broj_primeraka);

    printf("Knjiga je sacuvana u fajl!\n");
    fclose(file);
}

void sacuvaj_sve_u_fajl(const Knjiga k[], const int n)
{
    int i;
    FILE *file = fopen("biblioteka.txt", "w");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%s\n", k[i].naslov);
        fprintf(file, "%s\n", k[i].autor);
        fprintf(file, "%d\n", k[i].godina);
        fprintf(file, "%d\n", k[i].zanr);
        fprintf(file, "%d\n", k[i].stranica);
        fprintf(file, "%s\n", k[i].ISBN);
        fprintf(file, "%d\n", k[i].broj_primeraka);
    }

    printf("Sve knjige su sacuvane u fajl!\n");
    fclose(file);
}

void ucitaj_sve_iz_fajla(Knjiga k[], int *n)
{
    int i = 0;
    FILE *file = fopen("biblioteka.txt", "r");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    while(!feof(file))
    {
        fgets(k[i].naslov, 64, file);
        fgets(k[i].autor, 64, file);
        fscanf(file, "%d", &k[i].godina);
        fscanf(file, "%d", &k[i].zanr);
        fscanf(file, "%d", &k[i].stranica);
        fgetc(file);
        fgets(k[i].ISBN, 64, file);
        fscanf(file, "%d", &k[i].broj_primeraka);
        fgetc(file);

        k[i].naslov[strlen(k[i].naslov) - 1] = '\0';
        k[i].autor[strlen(k[i].autor) - 1] = '\0';
        k[i].ISBN[strlen(k[i].ISBN) - 1] = '\0';

        i++;
    }

    *n = i - 1;

    printf("Uspesno ucitano sve iz fajla!\n");
    fclose(file);
}

//Sistem menija [3 boda]

int prikazi_meni()
{
    int option;

    printf("\n0. Kraj!\n");
    printf("1. Dodaj knjigu\n");
    printf("2. Ispis biblioteke\n");
    printf("3. Sacuvaj sve u fajl\n");
    printf("4. Pretraga po autoru\n");
    printf("5. Iznajmljivanje knjige\n");
    printf("6. Vracanje knjige\n");
    printf("7. Pretraga po zanru\n");
    printf("8. Ucitaj biblioteku\n");

    printf("Izaberite opciju: ");
    scanf("%d", &option);
    getchar();

    return option;
}

//Pretraga po autoru [3 boda]

void pretraga_po_autoru(const Knjiga k[], const int n)
{
    int i;

    char autor[64];
    printf("Unesite autora: ");
    gets(autor);

    for(i = 0; i < n; i++)
    {
        if(strcmp(k[i].autor, autor) == 0)
        {
            ispis_jedne_knjige(k[i]);
        }
    }
}

//Iznajmljivanje i vraćanje (broj primjeraka) [6 bodova]

void iznajmljivanje(Knjiga k[], const int n)
{
    int i;
    int broj;
    char naslov[64];
    printf("Unesite naslov knjige koju zelite da iznajmite: ");
    gets(naslov);

    printf("Koliko primeraka knjige zelite da iznajmite?\n");
    scanf("%d", &broj);
    getchar();

    for(i = 0; i < n; i++)
    {
        if(strcmp(k[i].naslov, naslov) == 0 && k[i].broj_primeraka >= broj)
        {
            k[i].broj_primeraka = k[i].broj_primeraka - broj;
        }
    }
    printf("Iznajmili ste %d primeraka knjige %s!\n", broj, naslov);
}

void vracanje(Knjiga k[], const int n)
{
    int i;
    char naslov[30];
    int broj;

    printf("Unesite naslov knjige koju zelite da vratite: ");
    gets(naslov);

    printf("Koliko primeraka knjige zelite da vratite?");
    scanf("%d",&broj);
    getchar();

    for(i = 0; i < n; i++)
    {
        if(strcmp(k[i].naslov, naslov) == 0)
        {
            k[i].broj_primeraka = k[i].broj_primeraka + broj;
        }
    }
    printf("Vratili ste %d primeraka knjige %s!\n", broj, naslov);
}

//Pretraga po žanru [3 boda]

void pretraga_po_zanru(const Knjiga k[], const int n)
{
    int i;
    int zanr;
    printf("Izaberite zanr: ");
    scanf("%d", &zanr);
    getchar();

    for(i = 0; i < n; i++)
    {
        if(k[i].zanr == zanr)
        {
            ispis_jedne_knjige(k[i]);
        }
    }
}

