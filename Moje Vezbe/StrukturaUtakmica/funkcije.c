#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utakmica.h"

void upis_utakmica(Utakmica u[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Golovi domacin: ");
        scanf("%d",&u[i].golovi_domacin);
        printf("Golovi gosti: ");
        scanf("%d",&u[i].golovi_gosti);
        printf("\n");
    }
}

void ispis_utakmica(Utakmica u[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Golovi domacin: %d\n",u[i].golovi_domacin);
        printf("Golovi gosti: %d\n\n",u[i].golovi_gosti);
    }
}

int bodovi_domacin(Utakmica niz[], int n)
{
    int i;
    int bodovi = 0;

    for(i = 0; i < n; i++)
    {
        if(niz[i].golovi_domacin > niz[i].golovi_gosti)
        {
            bodovi = bodovi + 3;
        }
        else if(niz[i].golovi_domacin == niz[i].golovi_gosti)
        {
            bodovi = bodovi + 1;
        }
        else
        {
            bodovi = bodovi + 0;
        }
    }

    return bodovi;
}

//#include "heder.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void unos_utakmice(Utakmica *u)
//{
//    printf("Golovi domacin: ");
//    scanf("%d",&u->golovi_domacin);
//    printf("Golovi gost: ");
//    scanf("%d",&u->golovi_gost);
//    printf("\n");
//}
//
//void ispis_utakmice(const Utakmica u)
//{
//    printf("Golovi domacin: %d\n",u.golovi_domacin);
//    printf("Golovi gost: %d\n\n",u.golovi_gost);
//}
//
//void bodovi_domacin(const Utakmica u[], const int n)
//{
//    int i;
//    int bodovi = 0;
//
//    for(i = 0; i < n; i++)
//    {
//        if(u[i].golovi_domacin > u[i].golovi_gost)
//        {
//            bodovi = bodovi + 3;
//        }
//        else if(u[i].golovi_domacin == u[i].golovi_gost)
//        {
//            bodovi = bodovi + 1;
//        }
//        else
//        {
//            bodovi = bodovi + 0;
//        }
//    }
//
//    printf("%d",bodovi);
//}

