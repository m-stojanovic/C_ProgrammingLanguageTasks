#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studenti.h"

void upisivanjeStudenata(Student string[256], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Ime studenta: ");
        gets(string[i].ime);
        printf("Prezime studenta: ");
        gets(string[i].prezime);
        printf("Smer studenta: ");
        gets(string[i].smer);
        printf("Broj indeksa: ");
        scanf("%d",&string[i].broj_indeksa);
        printf("Godina upisa: ");
        scanf("%d",&string[i].godina_upisa);
        getchar();
        printf("\n");
    }


}

void ispisavanjeStudenata(Student string[256], int n)
{
   int i;

   for(i = 0; i < n; i++)
   {
       printf("Student %d\n",i + 1);
       printf("Ime: %s\n",string[i].ime);
       printf("Prezime: %s\n",string[i].prezime);
       printf("Smer: %s\n",string[i].smer);
       printf("Broj indeksa: %d\n",string[i].broj_indeksa);
       printf("Godina upisa: %d\n",string[i].godina_upisa % 100);
   }
}
