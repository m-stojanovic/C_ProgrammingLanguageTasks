#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// standarnda procedura za cuvanje uticavanje iz fajla
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

//MAIN MENI meni

int main()
{
    Utakmica utakmice[64];
    Utakmica u;
    int n = 0;
    int option;

    ucitaj_sve_iz_fajla(utakmice, &n);

    while(1)
    {
        option = prikazi_meni();
        switch(option)
        {
	  case 0:
                printf("Kraj programa!\n");
                return 0;
            case 1:
                upis_utakmice(&u);
                utakmice[n] = u;
                sacuvaj_jednu_utakmicu_u_fajl(u);
                n++;
                break;
            case 2:
                ispis_svih_utakmica(utakmice, n);
                break;
            default:
            printf("Ne postoji trazena komanda!\n");
                break;
        }
    }

    return 0;
}

// za obican meni bmi

int main()
{
    int i;
    Osobe niz[2];

    for(i = 0; i < 2; i++)
    {
      upisivanjeOsoba(&niz[i]);
    }

    for(i = 0; i < 2; i++)
    {
        printf("Osoba: %d: \n",i + 1);
        ispisivanjeOsoba(niz[i]);
    }

    printf("Najmanji body mass od svih osoba je: %.2f\n",MinBMI(niz,2)); // ovo je to
    printf("Osoba sa najmanje BMI: \n");
    ispisivanjeOsoba(&niz[IndexBMI(niz,2)]);

    return 0;
}

int IndexBMI(Osobe niz[], int n)
{
	float min = BMI(niz[0].tezina, niz[0].visina);
	int index = 0;
    int i;

	for (i = 0; i < n; i++) {
		float bodimass = BMI(niz[i].tezina, niz[i].visina);

		if (bodimass < min) {
			min = bodimass;
			index = i;
		}
	}

	return index;
}

// cena od do
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
// brisanje
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
        u[i] = u[i +1];
    }

    *n = i - 1;
}

void PretragaArtikala(const char string[300], const Artikal a[100], int n) {
    int i;

    printf("Prikaz svih artikala za uneti string!\n");

    for (i = 0; i < n; i++) {
        if (strcmp(string, a[i].naziv) == 0) {
            IspisiArtikal(a[i]);
        }
        else if (strcmp(string, a[i].proizvodjac) == 0) {
            IspisiArtikal(a[i]);
        }
        else if (strcmp(string, a[i].vrsta) == 0) {
            IspisiArtikal(a[i]);
        }
    }
}

void SelectionSortPoCeni(Artikal a[100], int n) {
    int i;
    int j;
    int min;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j].cena < a[min].cena) {
                min = j;
            }
        }

        Artikal tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }

    printf("Artikli su sortirani po ceni!\n");
}

void BubbleSortPoCeni(Artikal a[100], int n) {
    int i;
    int j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j].cena > a[j + 1].cena) {
                Artikal tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    printf("Artikli su sortirani po ceni!\n");
}

void SelectionSortPoNazivu(Artikal a[100], int n) {
    int i;
    int j;
    int min;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (strcmp(a[j].naziv, a[min].naziv) < 0) {
                min = j;
            }
        }

        Artikal tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }

    printf("Artikli su sortirani po nazivu!\n");
}

void BubbleSortPoNazivu(Artikal a[100], int n) {
    int i;
    int j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(a[j].naziv, a[j + 1].naziv) > 0) {
                Artikal tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    printf("Artikli su sortirani po nazivu!\n");
}

void NajjeftinijiArtikal(const char vrsta[30], Artikal a[100], int n) {
    int i;
    Artikal artikal;
    float min = FLT_MAX;

    printf("Prikaz najjeftinijeg artikla za unetu vrstu!\n");

    for (i = 0; i < n; i++) {
        if (strcmp(vrsta, a[i].vrsta) == 0) {
            if (min > a[i].cena) {
                min = a[i].cena;
                artikal = a[i];
            }
        }
    }

    IspisiArtikal(artikal);
}

void ObrisiArtikalIzFajla(const char naziv[30], Artikal a[100], int *n) {
    int i;
    int index;

    for (i = 0; i < *n; i++) {
        if (strcmp(naziv, a[i].naziv) == 0) {
            index = i;
            break;
        }
    }

    for (i = index; i < *n; i++) {
        a[i] = a[i + 1];
    }

    *n = i - 1;
    printf("Artikal %s je obrisan iz fajla!\n", naziv);
}

void BesplatnaSkolarina(const Student s[], const int n) {
    int i;
    int godinaStudija;
    float maxProsek = 0.0;
    Student student;

    printf("Unesite godinu studija: ");
    scanf("%d", &godinaStudija);
    getchar();

    for (i = 0; i < n; i++) {
        if (s[i].godinaStudija == godinaStudija) {
            if (s[i].prosekOcena > maxProsek) {
                maxProsek = s[i].prosekOcena;
                student = s[i];
            }
        }
    }

    printf("Besplatnu skolarinu je dobio sledeci student:\n");
    IspisiStudenta(student);
}
// funkcije FUNKCIJE:

void zamena(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int min(int *niz,int n)
{
    int i;
    int min = niz[0];
    for ( i = 0; i < n; i++ )
    {
        if(niz[i] < min)
        {
            min = niz[i];
        }
    }

    return min;
}

void sortira niz rastuce(int niz[], int n) ovako bez void zamena
{
    int i,j;

    for(i = 1; i < n; i++)
    {
        for( j = 0; j < n - i; j++ )
        {
            if(niz[j] > niz[j + 1])
            {
                int temp = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = temp;
            }
        }
    }
}

if ( niz[j] > niz[j+1]) // ovo se stavlja ako imamo funkciju zamena,ostalo isto
{
    zamena(&niz[j],&niz[j+1]);
}
//vraca podstring
char *podstring(char *string, int start, int end)
{
    char *pointer = malloc(end + 1);
    int c;

    for (c = 0; c < end; c++)
    {
        *(pointer + c) = * (string + start);
        string++;
    }

    *(pointer + c) = '\0';
    return pointer;
}

//2) Napisati program koji sadrži funkciju koja kopira jedan string u drugi, izbacujući razmake.
//Omogućiti korisniku da unese string za testiranje i prikazati rezultat.
void kopiranje_stringa(char niz[], char copy[])
{
    int i, j = 0;

    for(i = 0; niz[i] != '\0'; i++)
    {
        if(niz[i] != ' ')
        {
            copy[j++] = niz[i];
        }                                   kopiranje_stringa(niz,copy); printf("Novi niz: %s",copy);
    }
    copy[j] = '\0';
}

// 2. Napisati program koji sadrži funkciju koja prebrojava koliko parnih cifara ima u datom stringu i
// vraća taj broj kao rezultat. Omogućiti korisniku da unese string za testiranje i prikazati broj.
int parne_cifre(char string[])
{
    int brojac = 0;
    int i;
    int n = strlen(string);

    for(i = 0; i < n; i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            int broj = string[i] - 48;  // broj = broj * 10 + string[i] - '0';
            if(broj % 2 == 0)
            {
                brojac++;
            }
//            broj = 0;
        }
    }
    return brojac;
}
// pozicija prve tacke
int pozicija(char string[])
{
    int i;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == '.')
        {
            return i + 1;
        }
    }

    return -1;
}
// pretvara veliko slovo u upitnik
void string_upitnik(char string[], char copy[])
{
    int i;
    int j = 0;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            copy[j++] = '?';
        }
        else
        {
            copy[j++] = string[i];
        }
    }

    copy[j] = '\0';
}
