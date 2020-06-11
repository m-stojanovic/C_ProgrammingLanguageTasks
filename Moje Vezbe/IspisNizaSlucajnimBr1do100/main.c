#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//13. Ispuniti niz slučajnim brojevima od 1 do 100, te time zamijeniti unos niza od
//    strane korisnika u nekom od prethodnih primjera.
int main()
{

    srand(time(NULL));

    int n,i;

    int prosek, suma=0;

    scanf("%d", &n);

    int niz[n];

    for(i=0; i<n; i++)
    {
        int r = rand()%100 + 1;
        niz[i] = r;
        suma+=niz[i];
    }

    prosek=suma/n;

    ///BUBBLE SORT
    int flag; ///OZNAKA ZA BILO ZAMENE

    do{
        flag=0;
        for(i=1; i<n; i++)
        {
            if(niz[i-1]>niz[i])
            {
                ///ZAMENA
                int pom = niz[i];
                niz[i] = niz[i-1];
                niz[i-1] = pom;
                flag=1;
            }
        }
    }while(flag==1);

    ///KRAJ BUBBLE SORTA


    ///ODREDJIVANJE NABLIZEG PROSEKU
    int najblizi = niz[0];

    for(i=0; i<n; i++)
    {
        if(abs(prosek-niz[i])<abs(prosek-najblizi))
        {
            najblizi = niz[i];
        }
    }

    ///KRAJ ODREDJIVANJA NABLJIZEG PROSEKU


    ///ISPIS
    for(i=0; i<n; i++)
    {
        printf("%d ", niz[i]);
    }

    printf("\n");
    printf("Prosek: %d\n", prosek);
    printf("Najblizi proseku: %d", najblizi);
    ///KRAJ



    return 0;
}
