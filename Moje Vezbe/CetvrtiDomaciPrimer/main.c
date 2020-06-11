#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
/*
Napisati program za evidenciju izmjerenih temperatura u meteorološkoj stanici, u koji mogu
da se unose nova mjerenja, ili prikazuju statistike izračunate iz prethodnih mjerenja, koja se čuvaju
u fajlu. U slučaju unosa novog mjerenja, evidentira se datum (dan i mjesec, kao dva zasebna broja),
kao i izmjerena temperatura na taj dan (u celzijusima, može biti decimalna). U slučaju ispisa
statistika, potrebno je pronaći i prikazati najnižu i najvišu zabilježenu temperaturu (sa datumom
kada je izmjerena), te izračunati prosječnu temperaturu. Ova tri podatka treba prikazati za sva četiri
kvartala, kao i za čitavu godinu.
Jedno zabilježeno mjerenje treba realizovati kao strukturu. Pronalaženje minimuma,
maksimuma i prosjeka je potrebno realizovati kao funkcije koje uzimaju sva mjerenja i opseg u
mjesecima (od-do) za svoju pretragu/računanje, kako bi se mogle iskoristiti i za kvartale i za čitavu
godinu (1-3, 4-6, 7-9, 10-12 i 1-12).
*/
typedef struct
{
    int dan;
    int mesec;
    float temperatura;
} Prognoza;

void unesi_prognozu(Prognoza *p)
{
    printf("Unesite dan:");
    scanf("%d",&p->dan);
    printf("Unesite mesec: ");
    scanf("%d",&p->mesec);
    printf("Unesite temp: ");
    scanf("%f",&p->temperatura);

}

void ispisi_prognozu(Prognoza p)
{
    printf("Dan: %d\n",p.dan);
    printf("Mesec: %d\n",p.mesec);
    printf("Temp: %.2f\n\n",p.temperatura);
}

void sacuvaj_fajl(Prognoza p)
{
    FILE *file =fopen("temperatura.txt", "a");
    if (file == NULL)
    {
        printf("Greska!\n");
        return;
    }

    fprintf(file, "%d\n%d\n%.2f\n", p.dan, p.mesec, p.temperatura);
    printf("Uspeh!\n");
    fclose(file);
}


float prosek_za_godinu()
{
    Prognoza p;
    float prosek = 0.0;
    float suma = 0.0;
    int n = 0;
    FILE *file = fopen("temperatura.txt", "r");

    if(file == NULL)
    {
        printf("Greska!");
        return prosek;
    }

    while(!feof(file))
    {
        fscanf(file, "%d", &p.dan);
        fscanf(file, "%d", &p.mesec);
        fscanf(file, "%f", &p.temperatura);
//        ispisi_prognozu(p);

        n++;
        suma = suma + p.temperatura;
    }
    suma = suma - p.temperatura;
    n--;

    prosek = suma /n;
    fclose(file);

    return prosek;
}

Prognoza najniza_za_sve(int pocetak, int kraj)
{
    Prognoza p;
    Prognoza prognoza;
    float min = FLT_MAX;
    FILE *file = fopen("temperatura.txt", "r");

    if(file == NULL)
    {
        printf("Greska!");
        return p;
    }

    while(!feof(file))
    {
        fscanf(file, "%d", &p.dan);
        fscanf(file, "%d", &p.mesec);
        fscanf(file, "%f", &p.temperatura);
//        ispisi_prognozu(p);

        if( p.mesec >=pocetak && p.mesec <=kraj)
        {
            if(min > p.temperatura)
            {
                min = p.temperatura;
                prognoza = p;
            }
        }
    }

    fclose(file);
    return prognoza;
}

Prognoza najvisa_za_sve(int pocetak, int kraj)
{
    Prognoza p;
    Prognoza prognoza;
    float max = FLT_MIN;
    FILE *file = fopen("temperatura.txt", "r");

    if(file == NULL)
    {
        printf("Greska!");
        return p;
    }

    while(!feof(file))
    {
        fscanf(file, "%d", &p.dan);
        fscanf(file, "%d", &p.mesec);
        fscanf(file, "%f", &p.temperatura);
//        ispisi_prognozu(p);

        if( p.mesec >= pocetak && p.mesec <=kraj)
        {
            if(max < p.temperatura)
            {
                max = p.temperatura;
                prognoza = p;
            }
        }
    }

    fclose(file);
    return prognoza;
}

int main()
{
    int option;
    Prognoza p;

    printf("Novo merenje (1) ili statistika (2)?\n");
    scanf("%d",&option);

    if (option == 1)
    {
        unesi_prognozu(&p);
        sacuvaj_fajl(p);
    }
    else if (option == 2)
    {
        p = najniza_za_sve(1,3);
        printf("Najniza za prvi kvartal:\n");
        ispisi_prognozu(p);

        p = najniza_za_sve(1, 12);
        printf("Najniza za sve:\n");
        ispisi_prognozu(p);

        p = najvisa_za_sve(1, 3);
        printf("Najvisa u za prvi kvartal:\n");
        ispisi_prognozu(p);

        p = najvisa_za_sve(1, 12);
        printf("Najvisa za sve:\n");
        ispisi_prognozu(p);

        printf("Prosek u godini: %.2f\n",prosek_za_godinu());
    }
    else
    {
        printf("Greska u unosu!\n");
    }

    return 0;
}
