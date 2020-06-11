#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// file FILE:
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

// Sve linije imaju tu rec
izlazni = fopen("izlazni.txt", "wt");

    while(!feof(ulazni))
    {
        fgets(string, 1024, ulazni);

        if (strstr(string, rec) != NULL )
        {
            fprintf(izlazni, "%s", string);
        }
    }
// Dva fajla pise u treci
    izlazni = fopen("izlazni.txt", "wt");

    while(!feof(ulazni1))
    {
        fgets(string, 1024, ulazni1);
        fprintf(izlazni, "%s\n", string);
    }

    while(!feof(ulazni2))
    {
        fgets(string, 1024, ulazni2);
        fprintf(izlazni, "%s\n", string);
    }
// zbir i razlika dva broja
    fscanf(ulazni,"%d%d",&a,&b);
    fprintf(izlazni,"Zbir: %d\nRazlika: %d\n", a + b, a - b);
//file polindrom
    fgets(tekst, 50, f);
    fclose(f);

    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] >= 'A' && tekst[i] <= 'Z')
        {
            norm[j++] = tekst[i];
        }
        else if(tekst[i] >= 'a' && tekst[j] <= 'z')
        {
            norm[j++] = tekst[i] - 32;
        }
    }
    norm[j] = '\0';

    printf("Normalizovano : '%s'\n", norm);

    for(i = 0; i < j / 2; i++)
    {
        if(norm[i] != norm[j - i - 1])
        {
            palindrom = 0;
            break;
        }
    }

    if(palindrom)
        printf("Tekst jeste palindrom!\n");
    else
        printf("Tekst nije palindrom.\n");

// obrnuto citanje
    fscanf(f, "%d", &max);

    for(i = 0; i < max; i++)
        {
            fscanf(f, "%d", &niz[i]);
        }
    fclose(f);

    for(i = max - 1; i >= 0; i--)
        {
            printf("%d ", niz[i]);
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
// provera dal je string palindrom
int isPalindrom(char *string)
{
    int n = strlen(string);
    int i;
    int j = n - 1;
    int k = 0;

    for ( i = 0; i < n / 2; i++ )
    {
        if (string[k++] != string[j--])
        {
            return 0;
        }
    }

    return 1;
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
// random moguci zadaci
int main() prost broj
{
    int n,i;
    scanf("%d",&n);
    int prost=1;
    for (i = 2 ; i<n ; i++) {
        if (n%i==0) {
            prost = 0;
        }
    }
    if (prost == 0) printf("slozen");
    else printf("prost");
    return 0;
}
//bez razmaka string
    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] != ' ')
        {
            bezRazmaka[p] = tekst[i];
            p++;
        }
    }

    bezRazmaka[p] = '\0';
// broji iz stringa u int
    for(i = 0; tekst[i] != '\0'; i++)
    {
        if(tekst[i] >= '0' && tekst[i] <= '9')
        {
            broj = broj * 10 + (tekst[i] - '0');
        }
        else
        {
            printf("Imamo znakove koji nisu cifre!");
            return 1;
        }
    }

// STRCAT STRCPY STRSTR SVE SVE
int main()
{
    char str1[100],str2[100],str3[100];

    printf("Unesite string 1: ");
    gets(str1);

    printf("Unesite string 2: ");
    gets(str2);

    printf("Duzina string 1: %d\n",strlen(str1));
    printf("Duzina string 2: %d\n",strlen(str2));

    printf("Duzi string se nalazi na poziciji: %d\n",strcmp(str1,str2));

    strcpy(str3,str1);
    strcat(str3,str2);

    printf("Novo formirani string3 je: %s",str3);

    return 0;
}
// getchar putchar
int main()
{
    char ch = getchar();
    char last = ch;
    putchar(ch);


    while((ch = getchar()) != '\n')
    {
        if (ch != last)
        {
            putchar(ch);
        }
        last = ch;
    }

    return 0;
}
//najveci broj u stringu
    char ch;
    int broj = 0;
    int max = 0;

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            broj = broj * 10 + (ch - 48);
            // broj = broj * 10 + (ch - '0');
        } else {
        	// I nacin
        	if (broj > max) {
        		max = broj;
        	}
            broj = 0;
        }
    }

	 if (broj > max) {
	 	max = broj;
	 }
// zbir svih cifara u stringu
int main()
{
	char str[1000];
	int number = 0;
	int sum = 0;
	int sumAll = 0;
	gets(str);
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			sum += str[i] - '0';
			// BONUS: Računa sumu svih brojeva!
			number = number * 10 + str[i] - '0';
		} else {
			sumAll += number;
			number = 0;
		}
	}

	// Provera za poslednji karakter
	if (number > 0) {
		sumAll += number;
	}

	printf("%d\n", sum);
	printf("%d\n", sumAll);

	return 0;
}
//svi podstringovi stringa
    char s[1000];
    gets(s);
    int i, j, k;
    int n = strlen(s);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
            	putchar(s[k]);
            }

            putchar('\n');
        }
    }

//ispisati dva puta karakter
    char str[100];
    gets(str);
    int i;
    int n = strlen(str);

    for(i = n - 1; i >= 0; i--)
    {
        str[2 * i] = str[2 * i + 1] = str[i];
    }

    str[2 * n] = '\0';
    printf("%s\n", str);
// izbacivanje karaktera
int main()
{
	char string[100];
	int i, j;

	gets(string);

	for (i = 0; string[i] != '\0'; i++) {
    while (!((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') || (string[i] == '\0')))
        {
            for (j = i; string[j] != '\0'; j++) {
                string[j] = string[j + 1];
            }

            string[j] = '\0';
        }
	}

	printf("%s\n", string);

    return 0;
}
//string obrnuto pisanje
	char string[100];
	int i, j;
	gets(string);
	int n = strlen(string);

	for (i = 0; i < n / 2; i++) {
		char tmp = string[i];
		string[i] = string[n - i - 1];
		string[n - i - 1] = tmp;
	}

	printf("%s\n", string);

//MAIN MENI meni
// while beskonacna petlja

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
            case 3:
                pretraga_po_ligi(utakmice, n);
                break;
            case 4:
                pretraga_po_stadionu(utakmice, n);
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
// povezan za gore primer kolokvijuma ovde
void upisivanjeOsoba(Osobe *str)
{
    fflush(stdin);
    printf("Ime: ");
    gets(str->ime);
    printf("Visina: ");
    scanf("%f",&str->visina);
    printf("Tezina: ");
    scanf("%f",&str->tezina);
    getchar();
    printf("\n");
}

void ispisivanjeOsoba(Osobe str)
{
    printf("Ime: %s\n", str->ime);
    printf("Visina: %.2f\n", str->visina);
    printf("Tezina: %.2f\n", str->tezina);
    printf("BMI: %.2f\n\n", BMI(str->visina, str->tezina));
    //bonus ako pozivamo funkciju u ispisu
    printf("Cena: %d\n",nova_cena(str));
    printf("Usteda: %.2f\n\n",usteda(str));
}

void ispis_svih_proizvoda(const Proizvod p[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        ispis_jednog_proizvoda(p[i]);
    }
}

float BMI(float tezina, float visina)
{
    return tezina / sqrt(visina);
}

float MinBMI(Osobe niz[], int n)
{
    float min = BMI(niz[0].tezina, niz[0].visina);
    int i;

    for (i = 0; i < n; i++)
    {
        float bodimass = BMI(niz[i].tezina, niz[i].visina);

        if (bodimass < min)
        {
            min = bodimass;
        }
    }

    return min;
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
} // DIJAGONALA SE RACUNA: sqrt(pow(sirina,2)+pow(visina,2))

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
