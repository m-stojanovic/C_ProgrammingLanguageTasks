#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTAKMICA.h"

void ispis_lige(const int liga)
{
    switch(liga)
    {
        case 1:
            printf("Liga: Jelen Super Liga\n");
            break;
        case 2:
            printf("Liga: Premier Liga\n");
            break;
        case 3:
            printf("Liga: Seria A\n");
            break;
        case 4:
            printf("Liga: Bundes Liga\n");
            break;
    }
}

void pretraga_po_ligi(const Utakmica u[],const int n)
{
    int i;
    int option;

    printf("Liga:\n1. Jelen Super Liga\n2. Premier Liga\n3. Seria A\n4. Bundes Liga\n");
    scanf("%d",&option);

    for(i = 0; i < n; i++)
    {
        if(u[i].liga == option)
        {
            ispis_jedne_utakmice(u[i]);
            printf("\n");
        }
    }
}

void upis_utakmice(Utakmica *u)
{
    printf("Domacin: ");
    gets(u->domacin);
    printf("Gost: ");
    gets(u->gost);
    printf("Stadion: ");
    gets(u->stadion);
    printf("Golovi domacin: ");
    scanf("%d",&u->golovi_domacin);
    printf("Golovi gost: ");
    scanf("%d",&u->golovi_gost);
    printf("Liga:\n1. Jelen Super Liga\n2. Premier Liga\n3. Seria A\n4.Bundes Liga\n");
    scanf("%d", &u->liga);
    getchar();
}

void ispis_jedne_utakmice(const Utakmica u)
{
    ispis_lige(u.liga);
    printf("Stadion: %s\n", u.stadion);
    printf("%s %d:%d %s\n", u.domacin, u.golovi_domacin, u.golovi_gost, u.gost);
}

void ispis_svih_utakmica(const Utakmica u[], const int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d.\n", i + 1);
        ispis_jedne_utakmice(u[i]);
    }
}

int prikazi_meni()
{
    int option;

    printf("\n0.Kraj!\n");
    printf("1.Dodaj novu utakmicu\n");
    printf("2.Ispisi sve utakmice\n");
    printf("3.Pretraga po ligi\n");
    printf("4.Pretraga po imenu stadiona\n");
    printf("5.Pretraga utakmica po klubu\n");
    printf("6.Sve utakmice na kojima su oba tima dala gol\n");
    printf("7.Prebroj utakmice koje su zavrsene nereseno u ligi\n");
    printf("8.Obrisi utakmicu\n");
    printf("9.Sacuvaj u fajl i izadji\n");
    printf("10.Ispisi ko ima vise poena klub1 ili klub2\n");
    printf("11.Liga sa najvise postignutih golova\n");
    printf("12.Statistika utakmica po broju datih golova\n");

    printf("Odaberite:\n");
    scanf("%d",&option);
    getchar();

    return option;
}

void sacuvaj_jednu_utakmicu_u_fajl(const Utakmica u)
{
    FILE *file = fopen("ulaz.txt", "a");
    if(file == NULL)
    {
        printf("Greska!\n");
        return;
    }

    fprintf(file, "%s\n", u.domacin);
    fprintf(file, "%s\n", u.gost);
    fprintf(file, "%s\n", u.stadion);
    fprintf(file, "%d\n", u.golovi_domacin);
    fprintf(file, "%d\n", u.golovi_gost);
    fprintf(file, "%d\n", u.liga);

    fclose(file);
}

void sacuvaj_sve_u_fajl(const Utakmica u[], const int n)
{
    int i;
    FILE *file = fopen("ulaz.txt", "w");
    if(file == NULL)
    {
        printf("Greska!\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%s\n", u[i].domacin);
		fprintf(file, "%s\n", u[i].gost);
		fprintf(file, "%s\n", u[i].stadion);
		fprintf(file, "%d\n", u[i].golovi_domacin);
    	fprintf(file, "%d\n", u[i].golovi_gost);
    	fprintf(file, "%d\n", u[i].liga);
    }

    printf("Uspesno sacuvane sve utakmice u fajl\n");
    fclose(file);
}

void ucitaj_sve_iz_fajla(Utakmica u[], int *n)
{
    int i = 0;
    FILE *file = fopen("ulaz.txt", "r");
    if(file == NULL)
    {
        printf("Greska!\n");
        return;
    }

    while(!feof(file))
    {
        fgets(u[i].domacin, 64, file);
        fgets(u[i].gost, 64, file);
        fgets(u[i].stadion, 64, file);
        fscanf(file, "%d", &u[i].golovi_domacin);
        fscanf(file, "%d", &u[i].golovi_gost);
        fscanf(file, "%d", &u[i].liga);
        fgetc(file);

        u[i].domacin[strlen(u[i].domacin) - 1] = '\0';
        u[i].gost[strlen(u[i].gost) - 1] = '\0';
        u[i].stadion[strlen(u[i].stadion) - 1] = '\0';

        i++;
    }

    *n = i - 1;
    fclose(file);
}

void pretraga_po_stadionu(const Utakmica u[],const int n)
{
    int i;
    char ime_stadiona[64];
    printf("Unesite naziv stadiona:\n");
    gets(ime_stadiona);
    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(strcmp(u[i].stadion, ime_stadiona) == 0)
        {
            ispis_jedne_utakmice(u[i]);
            printf("\n");
        }
    }
}

void pretraga_po_nazivu_kluba(const Utakmica u[], const int n)
{
    int i;
    char ime_kluba[64];
    printf("Unesite ime kluba:\n");
    gets(ime_kluba);
    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(strcmp(u[i].domacin, ime_kluba) == 0 || strcmp(u[i].gost, ime_kluba) == 0)
        {
            ispis_jedne_utakmice(u[i]);
            printf("\n");
        }
    }
}

void min_jedan_pogodak(const Utakmica u[], const int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(u[i].golovi_domacin >= 1 && u[i].golovi_gost >= 1)
        {
            ispis_jedne_utakmice(u[i]);
            printf("\n");
        }
    }
}

void neresen_rezultat(const Utakmica u[], const int n)
{
    int i;
    int izaberi_ligu;

    printf("Liga:\n1. Jelen super liga\n2. Premier Liga\n3. Seria A\n4. Bundes Liga\n");
    scanf("%d", &izaberi_ligu);
    printf("\n");

    for(i = 0; i < n; i++)
    {
        if(izaberi_ligu == u[i].liga)
        {
            if(u[i].golovi_domacin == u[i].golovi_gost)
            {
                ispis_jedne_utakmice(u[i]);
                printf("\n");
            }
        }
    }
}

void brisanje_utakmice(Utakmica u[], int *n)
{
    Utakmica u1;
    int i;
    int pozicija_za_brisanje;
    upis_utakmice(&u1);

    for(i = 0; i < *n; i++)
    {
        if(strcmp(u1.domacin, u[i].domacin) == 0 && strcmp(u1.gost, u[i].gost) == 0 && strcmp(u1.stadion, u[i].stadion) == 0 && u1.golovi_domacin == u[i].golovi_domacin && u1.golovi_gost == u[i].golovi_gost && u1.liga == u[i].liga)
        {
            pozicija_za_brisanje = i;
        }
    }

    for(i = pozicija_za_brisanje; i < *n; i++)
    {
        u[i] = u[i + 1];
    }

    *n = i - 1;
}

int poeni(const Utakmica u[], const int n, char *tim)
{
    int i;
    int suma = 0;

    for(i = 0; i < n; i++)
    {
        if(strcmp(u[i].domacin, tim) == 0)
        {
            if(u[i].golovi_domacin > u[i].golovi_gost)
            {
                suma = suma + 3;
            }
            else if(u[i].golovi_domacin == u[i].golovi_gost)
            {
                suma = suma + 1;
            }
        }
        else if(strcmp(u[i].gost, tim) == 0)
        {
            if(u[i].golovi_gost > u[i].golovi_domacin)
            {
                suma = suma + 3;
            }
            else if(u[i].golovi_domacin == u[i].golovi_gost)
            {
                suma = suma + 1;
            }
        }
    }

    return suma;
}

void vise_poena(const Utakmica u[], const int n)
{
    char prvi_tim[64];
    char drugi_tim[64];

    printf("Unesite naziv prvog tima:\n");
    gets(prvi_tim);

    printf("Unesite naziv drugog tima:\n");
    gets(drugi_tim);

    int poeni_prvi;
    int poeni_drugi;

    poeni_prvi = poeni(u, n, prvi_tim);
    poeni_drugi = poeni(u, n, drugi_tim);

    printf("%s je osvojio %d poena\n", prvi_tim, poeni_prvi);
    printf("%s je osvojio %d poena\n", drugi_tim, poeni_drugi);

    if(poeni_prvi > poeni_drugi)
    {
        printf("%s je osvojio vise poena\n", prvi_tim);
    }
    else if(poeni_prvi < poeni_drugi)
    {
        printf("%s je osvojio vise poena\n", drugi_tim);
    }
    else
    {
        printf("Oba tima su osvojila isti broj poena\n");
    }

    return;
}

void racunanje_golova_po_ligi(const Utakmica u[], const int n)
{
    int i;
    int golovi[4] = {0, 0, 0, 0};

    for(i = 0; i < n; i++)
    {
        switch(u[i].liga)
        {
            case 1:
                golovi[0] += u[i].golovi_domacin + u[i].golovi_gost;
                break;
            case 2:
                golovi[1] += u[i].golovi_domacin + u[i].golovi_gost;
                break;
            case 3:
                golovi[2] += u[i].golovi_domacin + u[i].golovi_gost;
                break;
            case 4:
                golovi[3] += u[i].golovi_domacin + u[i].golovi_gost;
                break;
        }
    }

    int max = 0;
    int j = 0;

    for(i = 0; i < 4; i++)
    {
        if(golovi[i] > max)
        {
            max = golovi[i];
            j = i;
        }
    }

    printf("Liga sa najvise golova: ");
    ispis_lige(j + 1);
    printf("%d\n", max);

    return;
}

void statistika(const Utakmica u[], const int n)
{
    int ukupno_golova[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    int j;

    for(i = 0; i < n; i++)
    {
        int golovi_na_utakmici = u[i].golovi_domacin + u[i].golovi_gost;

        for(j = 0; j < 8; j++)
        {
            if(golovi_na_utakmici == j)
            {
                ukupno_golova[j]++;
                break;
            }
        }
    }

    printf("Broj golova\tBroj odigranih\tUkupno\tProcenat\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d\t\t%d\t\t%d\t%.2f%%\n", i, ukupno_golova[i], n, 100.0 * ukupno_golova[i] / n);
    }

    return;
}
