#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AUTOMOBIL.h"

void upis_jednog_automobila(Automobil *a)
{
    printf("Proizvodjac: ");
    gets(a->proizvodjac);
    printf("Model: ");
    gets(a->model);
    printf("Godiste: ");
    scanf("%d",&a->godiste);
    getchar();
    printf("Gorivo: ");
    gets(a->gorivo);
    printf("Cena: ");
    scanf("%f",&a->cena);
    getchar();
}

void ispis_jednog_automobila(const Automobil a)
{
        printf("Proizvodjac: %s\n",a.proizvodjac);
        printf("Model:       %s\n",a.model);
        printf("Godiste:     %d\n",a.godiste);
        printf("Gorivo:      %s\n",a.gorivo);
        printf("Cena:        %.2f\n",a.cena);
}

void ispis_svih_automobila(const Automobil a[], const int n)
{
    printf("\nISPISI SVE AUTOMOBILE:\n");
    int i;
    for(i = 0; i < n; i++)
    {
        ispis_jednog_automobila(a[i]);
    }
}
// Učitavanje podataka iz fajla i snimanje u fajl [6 bodova]
void sacuvaj_automobil_u_fajl(const Automobil a) // bez nizova za sacuvaj u fajl
{
    FILE *file = fopen("automobili.txt", "a");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    fprintf(file, "%s\n", a.proizvodjac); // jedino da fprintfujemo u sacuvaj u fajl to sto zelimo da sacuvamo
    fprintf(file, "%s\n", a.model);
    fprintf(file, "%d\n", a.godiste);
    fprintf(file, "%s\n", a.gorivo);
    fprintf(file, "%.2f\n", a.cena);

    printf("Uspesno sacuvan automobil u fajl!\n");
    fclose(file);
}

void sacuvaj_sve_automobile_u_fajl(const Automobil a[], const int n)
{
    int i;
    FILE *file = fopen("automobili.txt", "w"); // w je jer mozemo da overwrite sve prethodne jer ce svi ponovo da se sacuvaju
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%s\n", a[i].proizvodjac); // ne smemo ubacimo funkciju sacuvaj u fajl ovde,vec moramo zasebno
        fprintf(file, "%s\n", a[i].model);
        fprintf(file, "%d\n", a[i].godiste);
        fprintf(file, "%s\n", a[i].gorivo);
        fprintf(file, "%.2f\n", a[i].cena);
    }

    fclose(file);
}

void ucitaj_sve_automobile_iz_fajla(Automobil a[], int *n)
{
    int i = 0;                             // int i = 0 , uvek tako podesimo kad ucitavamo sve automobile iz fajla
    FILE *file = fopen("automobili.txt", "r");
    if(file == NULL)
    {
        printf("Greska!");
        return;
    }

    while(!feof(file))
    {
        fgets(a[i].proizvodjac, 64, file);
        fgets(a[i].model, 64, file);
        fscanf(file, "%d", &a[i].godiste);
        fgetc(file);
        fgets(a[i].gorivo, 64, file);
        fscanf(file, "%f", &a[i].cena);
        fgetc(file);

        a[i].proizvodjac[strlen(a[i].proizvodjac) - 1] = '\0';
        a[i].model[strlen(a[i].model) - 1] = '\0';
        a[i].gorivo[strlen(a[i].gorivo) - 1] = '\0';

        i++;
    }

    *n = i - 1; // isto uvek ovako , ide uz ovo odmah gore u ucitaj sve iz fajla
    printf("Automobili su ucitani iz fajla!\n");
    fclose(file);
}

// Sistem Menija [3 boda]

int prikazi_meni()
{
    int option;

    printf("\n0. Kraj programa!\n");
    printf("1. Dodaj automobil\n");
    printf("2. Ispis svih automobila\n");
    printf("3. Sacuvaj u fajl\n");
    printf("4. Ucitaj sve iz fajla\n");
    printf("5. Pretraga po modelu\n");
    printf("6. Pretraga po proizvodjacu i godistu\n");
    printf("7. Pretraga po tipu motora\n");

    printf("Izaberite opciju: "); // Biranje opcije ide tek nakon svih printefova.
    scanf("%d",&option); // I nakon scanf-a u prikazi_meni uvek ide getchar();
    getchar();

    return option;
}

void pretraga_po_modelu(const Automobil a[], const int n)
{
    int i;
    char model[64];
    printf("Unesite model automobila: ");
    gets(model);

    for(i = 0; i < n; i++)
    {
        if(strcmp(a[i].model, model) == 0) // prvo ide a[i].model pa onda novo unesena vrednost
        {
            ispis_jednog_automobila(a[i]);
        }
    }
}

void pretraga_po_proizvodjacu_godistu(const Automobil a[], const int n)
{
    int i;
    char proizvodjac[64];
    int godiste;

    printf("Unesite proizvodjaca: ");
    gets(proizvodjac);
    printf("Unesite godiste: ");
    scanf("%d",&godiste);
    getchar();

    for(i = 0; i < n; i++)
    {
        if(strcmp(a[i].proizvodjac, proizvodjac) == 0 && a[i].godiste == godiste) // zato sto je int pa moze bez strcmp
        {
            ispis_jednog_automobila(a[i]);
        }
    }
}

void pretraga_po_gorivu(const Automobil a[], const int n)
{
    int i;
    char gorivo[64];
    printf("Unesite gorivo: ");
    gets(gorivo);

    for(i = 0; i < n; i++)
    {
        if(strcmp(a[i].gorivo, gorivo) == 0)
        {
            ispis_jednog_automobila(a[i]);
        }
    }
}
