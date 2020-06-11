#include <stdio.h>
#include <time.h>
//6. Napisati program gde će korisnik uneti 2 broja (A i B) i bilo koji dvocifreni broj (10-99). Ako su
//i A i B parni brojevi, onda ispisati sve brojeve u intervalu (A, B) - bez broja A i bez broja B. Ako su
//i A i B neparni brojevi, onda ispisati njihovu razliku (A - B). Ako je jedan paran, a drugi neparan ili
//obrnuto, ispisati njihov zbir (A + B). Takodje, ispisati da li je uneti dvocifren broj prost ili ne (broj
//je prost samo ako je deljiv brojem 1 i samim sobom => HINT: nijedan paran broj nije prost, sem
//broja 2). Termin 3.

int main()
{
    srand(time(NULL));

    int a,b,i;
    scanf("%d%d",&a,&b);

    int dvocifren;
    int prost = 1;
    dvocifren = rand()%(99-10+1)+10; //Dvocifren broj je neki broj izmedju opsega brojeva 10 i 99


        if( a % 2 == 0 && b % 2 == 0)
        {
            for( i = a + 1 ; i < b; i++)
            {
                printf("%d\n", i);
            }
        }
        else if( a % 2 != 0 && b % 2 != 0)
        {
                printf("Razlika: %d\n", a - b);

        }
        else if( a % 2 == 0 && b % 2 != 0)
        {
                printf("Zbir: %d\n", a + b);

        }
        else
        {
                printf("%Zbir Drugi: %d\n", a + b);
        }


    printf("Dvocifren broj jeste: %d\n",dvocifren);

    for(i = 2; i < 98 && i != dvocifren; i++)
    {
        if(dvocifren % i == 0)
        {
            prost = 0;
        }
    }
    if (prost == 0) printf("Dvocifren broj je slozen!");
    else printf("Dvocifren broj je prost!");

    return 0;
}
