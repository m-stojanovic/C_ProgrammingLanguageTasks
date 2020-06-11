#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tekst[1024];
    int red = 0;

    FILE *ulazni;
    ulazni = fopen("ulazni.txt", "rt");
    if ( ulazni == NULL )
    {
        printf("Greska 1!");
        return 1;
    }


    while(!feof(ulazni))
    {
        fgets(tekst, 1024, ulazni);
        red++;
    }

    printf("%d",red);

    return 0;
}
