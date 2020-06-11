#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcije.h"
// Za bonus poen koristimo rec "programming"

int main(){
  int opcija;

  printf("Izaberite opciju:\n1) Prijava\n2) Registracija\n");
  scanf("%d", &opcija);

  if(opcija == 1)
    {
        prijava();
    }
  else if(opcija == 2)
    {
        registracija();
    }
  else
  {
    printf("Izabrali ste nepostojecu opciju\n");
  }

  return 0;
}
