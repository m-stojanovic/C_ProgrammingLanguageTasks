#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcije.h"
#define BUFFER_SIZE 256

char korisnickoIme[BUFFER_SIZE];
char lozinka[BUFFER_SIZE];

int hes(char lozinka[], int n)
{
  int i;
  int h = 1;
  char salt[] = "programming";
  int n_salt = strlen(salt);
  int m = n + n_salt;
  char novaLozinka[m + 1];

  strcpy(novaLozinka, lozinka);
  strcat(novaLozinka, salt);
  printf("Nova lozinka jeste: %s\n", novaLozinka);

  for(i = 0; i < m; i++)
    h = h * 5 + novaLozinka[i] * 2 - 1;

  return h;
}

void provera(char ime[], int n, int loz)
{
  FILE *file;
  char korisnicko_ime_baza[BUFFER_SIZE];
  char ime_baza[BUFFER_SIZE], prezime_baza[BUFFER_SIZE];
  int lozinka_baza;
  int ind = 0;

  file = fopen("korisnici.txt", "r");
  if(file == NULL)
    {
        printf("Greska pri otvaranju fajla\n");
    }

  while(fscanf(file, "%s\n%d\n%s%s", korisnicko_ime_baza, &lozinka_baza, ime_baza, prezime_baza) != EOF){
    printf("---%s %d---\n---%s %d---\n", korisnicko_ime_baza, lozinka_baza, ime, loz);
    if(strcmp(korisnicko_ime_baza, ime) == 0 && lozinka_baza == loz){
      printf("Dobrodosli %s %s!\n", ime_baza, prezime_baza);
      ind = 1;
      break;
    }
  }

  if(ind == 0)
    {
        printf("Neuspesno prijavljivanje\n");
    }

  fclose(file);
}

void prijava(void)
{
  int n_ime;
  int n_lozinka;

  printf("Unesite ime: ");
  scanf("%s", korisnickoIme);

  n_ime = strlen(korisnickoIme);

  printf("Unesite lozinku: ");
  scanf("%s", lozinka);

  n_lozinka = strlen(lozinka);

  int hesirana_lozinka = hes(lozinka, n_lozinka);

  provera(korisnickoIme, n_ime, hesirana_lozinka);
}

void registracija(void)
{
  char lozinka_potvrda[BUFFER_SIZE];
  char ime[BUFFER_SIZE], prezime[BUFFER_SIZE];
  int n_ime, n_prezime, n_lozinka, n_puno_ime;

  printf("Unesite ime: ");
  scanf("%s", korisnickoIme);

  printf("Unesite puno ime: ");
  scanf("%s%s", ime, prezime);

  n_ime = strlen(ime);
  n_prezime = strlen(prezime);
  n_puno_ime = n_ime + n_prezime;
  char puno_ime[n_puno_ime + 1];

  printf("Unesite lozinku: ");
  scanf("%s", lozinka);

  printf("Potvrdite lozinku: ");
  scanf("%s", lozinka_potvrda);

  if(strcmp(lozinka, lozinka_potvrda) == 0)
    {
    n_lozinka = strlen(lozinka);

    int hesirana_lozinka = hes(lozinka, n_lozinka);

    strcpy(puno_ime, ime);
    strcat(puno_ime, " ");
    strcat(puno_ime, prezime);

    FILE *file;

    file = fopen("korisnici.txt", "a");
    if(file == NULL)
      printf("Greska pri otvaranju fajla\n");

    fprintf(file, "%s\n%d\n%s\n", korisnickoIme, hesirana_lozinka, puno_ime);

    printf("Uspesno ste se registrovali\n");

    fclose(file);
    }
  else
  {
      printf("Lozinke se ne poklapaju\n");
  }
}
