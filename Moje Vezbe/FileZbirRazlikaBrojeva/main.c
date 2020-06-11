#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    FILE* ulazni, *izlazni;

    ulazni = fopen("ulazni.txt", "rt");
    if( ulazni == NULL )
    {
        printf("Greska pri otvaranju fajla!");
        return 1;
    }

    izlazni = fopen("izlazni.txt", "wt");
    if( izlazni == NULL )
    {
        printf("Greska pri otvaranju fajla broj 2!");
        return 2;
    }

    fscanf(ulazni,"%d%d",&a,&b);
    fprintf(izlazni,"Zbir: %d\nRazlika: %d\n", a + b, a - b);

    fclose(ulazni);
    fclose(izlazni);

    printf("Gotovo!");

    return 0;
}
