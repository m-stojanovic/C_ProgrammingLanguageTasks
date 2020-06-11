#include <stdio.h>
#include <string.h>


int main()
{
    char tekst[30];
    int i, broj = 0;

    printf("Unesite tekst : ");
    gets(tekst);

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

    printf("Uneseni broj : %d\n", broj);
    return 0;
}


//int main()
//{
//    char str[100];
//    char str2[100];
//    gets(str);
//    char i,j;
//
//    for ( i = 0; str[i] != '\0'; i++)
//    {
//        if ( str[i] >= '0' && str[i] <= '9' )
//        {
//            str2[j] = str[i];
//            j++;
//        }
//        else
//        {
//            printf("Imamo znakove koji nisu cifre!");
//            return 1;
//        }
//    }
//
//    str2[j] = '\0';
//    printf("%s",str2);
//
//    return 0;
//}
