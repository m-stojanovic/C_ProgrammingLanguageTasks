#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GSP.h"
//Unos sa tastature i ispis podataka (ID (5 cifara), početna stanica, krajnja stanica, interval
// (u minutima), naziv vozila, tip vozila (tramvaj, trolejbus, autobus, elektro-bus, minibus)) [4 boda]
void upis_vozila(GSP *g)
{
    printf("ID: ");
    scanf("%d",&g->ID);
    getchar();
    printf("Pocetna Stanica: ");
    gets(g->pocetna_stanica);
    printf("Krajna Stanica: ");
    gets(g->krajna_stanica);
    printf("Interval: ");
    scanf("%d",&g->interval);
    getchar();
    printf("Naziv: ");
    gets(g->naziv);
    printf("Tip vozila: ");
    gets(g->tip_vozila);
}

void ispis_vozila(const GSP g)
{
    printf("ID: %d\n", g.ID);
    printf("Pocetna Stanica: %s\n", g.pocetna_stanica);
    printf("Krajna Stanica: %s\n", g.krajna_stanica);
    printf("Interval: %d\n", g.interval);
    printf("Naziv: %s\n", g.naziv);
    printf("Tip vozila: %s\n\n", g.tip_vozila);
}

void ispis_svih_vozila(const GSP g[], const int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        ispis_vozila(g[i]); // Ovo zapamti , kako u for petlji da stavis ispis svakog spiska
    }
}

// Učitavanje podataka iz fajla i snimanje u fajl [6 bodova]

void sacuvaj_jedno_vozilo_u_fajl(const GSP g)
{
    FILE *file = fopen("vozila.txt", "a");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    fprintf(file, "%d\n", g.ID);
    fprintf(file, "%s\n", g.pocetna_stanica);
    fprintf(file, "%s\n", g.krajna_stanica);
    fprintf(file, "%d\n", g.interval);
    fprintf(file, "%s\n", g.naziv);
    fprintf(file, "%s\n", g.tip_vozila);

    fclose(file);
}

void sacuvaj_sva_vozila_u_fajl(const GSP g[], const int n)
{
    int i;
    FILE *file = fopen("vozila.txt", "w");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%d\n", g[i].ID);
        fprintf(file, "%s\n", g[i].pocetna_stanica);
        fprintf(file, "%s\n", g[i].krajna_stanica);
        fprintf(file, "%d\n", g[i].interval);
        fprintf(file, "%s\n", g[i].naziv);
        fprintf(file, "%s\n", g[i].tip_vozila);
    }

    fclose(file);
}

void ucitaj_sva_vozila_iz_fajla(GSP g[], int *n) // bez const jer se vrednost menja zbog pointera
{
    int i = 0;
    FILE *file = fopen("vozila.txt", "r");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    while(!feof(file))
    {
        fscanf(file, "%d", &g[i].ID);
        fgetc(file);
        fgets(g[i].pocetna_stanica, 64, file);
        fgets(g[i].krajna_stanica,  64, file);
        fscanf(file, "%d", &g[i].interval);
        fgetc(file);
        fgets(g[i].naziv,           64, file);
        fgets(g[i].tip_vozila,      64, file);

        g[i].pocetna_stanica[strlen(g[i].pocetna_stanica) - 1] = '\0';
        g[i].krajna_stanica[strlen(g[i].krajna_stanica) - 1] = '\0';
        g[i].naziv[strlen(g[i].naziv) - 1] = '\0';
        g[i].tip_vozila[strlen(g[i].tip_vozila) - 1] = '\0';

        i++;
    }

    *n = i - 1;
    fclose(file);
}


//Sistem menija [3 boda]

int prikazi_meni()
{
   int option;

   printf("\n0 Kraj!\n");
   printf("1. Dodaj GSP vozilo\n");
   printf("2. Ispisi sva GSP vozila\n");
   printf("3. Sacuvaj sva GSP vozila u fajl\n");
   printf("4. Ucitaj sva GSP vozila iz fajla\n");
   printf("5. Pretraga po pocetnoj i krajnoj stanici\n");
   printf("6. Ispis po intervalu\n");
   printf("7. Ispis po tipu vozila\n");

   printf("Izaberite opciju: ");
   scanf("%d",&option);
   getchar(); // MNOGO BITNO!!!

   return option;
}

// Pretraga po početnoj i krajnjoj stanici [6 bodova]

void pretraga_po_pocetnoj_krajnoj_stanici(const GSP g[],const int n)
{
    int i;
    char pocetna[64];
    char krajna[64];

    printf("Unesite pocetnu stanicu: ");
    gets(pocetna);
    printf("Unesite krajnu stanicu: ");
    gets(krajna);

    for(i = 0; i < n; i++)
    {
        if(strcmp(pocetna, g[i].pocetna_stanica) == 0 && strcmp(krajna, g[i].krajna_stanica) == 0)
            // poredimo string pocetna i onaj iz ispisa vozila. Ako je to tacno ( a to predstavljamo tako sto je == 0
            // onda ispisujemo to vozilo
        {
            ispis_vozila(g[i]);
        }
    }
}

//Ispis svih vozila čiji je interval vožnje duži od 55 minuta [3 boda]

void ispis_veceg_intervala(const GSP g[], const int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(g[i].interval >= 55)
        {
            ispis_vozila(g[i]);
        }
    }
}

// Ispisati sve podatke o vozilima čiji tip će uneti korisnik iz konzole [3 boda]

void ispis_odredjenog_tipa_vozila(const GSP g[], const int n)
{
    int i;
    char tip[64];
    printf("Uneti trazeni tip vozila: ");
    gets(tip);

    for(i = 0; i < n; i++)
    {
        if(strcmp(tip, g[i].tip_vozila) == 0)
        {
            ispis_vozila(g[i]);
        }
    }
}

