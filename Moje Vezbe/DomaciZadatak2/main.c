#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Milos Stojanovic S23/18

int main()
{
    char str1[200];
    char str2[200];

    printf("Unesite string 1:\n");
    gets(str1);
    printf("Unesite string 2:\n");
    gets(str2);

    char rec[100];
    printf("Unesite rec: ");
    gets(rec);

    int brojac1 = 0, brojac2 = 0,j,i;
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int nrec = strlen(rec);

    for ( i = 0; i < n1; i++ )
    {
        if ( str1[i] >= 'A' && str1[i] <= 'Z' )
        {
            printf("Greska! String 1 mora da se sastoji samo od malih slova!\n");
            return 1;
        }

        for ( j = 0; j < nrec; j++)
        {
            if ( str1[i] != rec[j] )
            {
                break;
            }
            else
            {
                i++;
                if ( j == nrec - 1 && !(str1[i] >= 'a' && str1[i] <= 'z') )
                {
                    brojac1++;
                    j = 0;
                }
            }
        }
    }

    for ( i = 0; i < n2; i++ )
    {
        if ( str2[i] >= 'A' && str2[i] <= 'Z' )
        {
            printf("Greska! String 2 mora da se sastoji samo od malih slova!\n");
            return 1;
        }

        for ( j = 0; j < nrec; j++)
        {
            if ( str2[i] != rec[j] )
            {
                break;
            }
            else
            {
                i++;
                if ( j == nrec - 1 && !(str2[i] >= 'a' && str2[i] <= 'z') )
                {
                    brojac2++;
                    j = 0;
                }
            }
        }
    }

    printf("rec '%s' se pojavila %d puta u stringu jedan!\n",rec,brojac1);
    printf("rec '%s' se pojavila %d puta u stringu dva!\n",rec,brojac2);

    if ( brojac1 > brojac2 )
    {
        printf("Rec '%s' se vise puta pojavila u prvom stringu koji glasi: '%s'\n",rec,str1);
    }
    else if ( brojac2 > brojac1 )
    {
        printf("Rec '%s' se vise puta pojavila u drugom stringu koji glasi: '%s'\n",rec,str2);
    }
    else
    {
        printf("Rec '%s' se pojavila jednako u oba stringa!\nPrvi string: '%s'\nDrugi string: '%s'",rec,str1,str2);
    }

    return 0;
}
