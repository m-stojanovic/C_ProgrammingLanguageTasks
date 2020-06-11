#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[1024];

    FILE *ulazni1,*ulazni2,*izlazni;

    ulazni1 = fopen("ulazni1.txt", "rt");
    ulazni2 = fopen("ulazni2.txt", "rt");

    if( ulazni1 == NULL || ulazni2 == NULL )
    {
        printf("Greska");
        return 1;
    }

    izlazni = fopen("izlazni.txt", "wt");

    while(!feof(ulazni1))
    {
        fgets(string, 1024, ulazni1);
        fprintf(izlazni, "%s\n", string);
    }

    while(!feof(ulazni2))
    {
        fgets(string, 1024, ulazni2);
        fprintf(izlazni, "%s\n", string);
    }

    fclose(ulazni1);
    fclose(ulazni2);
    fclose(izlazni);

    printf("Gotovo!");

    return 0;
}
