#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[1024];
    char rec[256];
    printf("Unesite string koji trazite!\n");
    gets(rec);

    FILE *ulazni,*izlazni;
    ulazni = fopen("ulazni.txt", "rt");
    if ( ulazni == NULL )
    {
        printf("Greska");
        return 1;
    }

    izlazni = fopen("izlazni.txt", "wt");

    while(!feof(ulazni))
    {
        fgets(string, 1024, ulazni);

        if (strstr(string, rec) != NULL )
        {
            fprintf(izlazni, "%s", string);
        }
    }

    fclose(ulazni);
    fclose(izlazni);

    printf("Gotovo!");

    return 0;
}
