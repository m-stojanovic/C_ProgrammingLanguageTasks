#include <stdio.h>

int main()
{
    int a,b;
    FILE *ulazni, *izlazni;

    ulazni = fopen("brojevi.txt", "rt");
    if(ulazni == NULL)
    {
        printf("Greska pri otvaranju prvog fajla!");
        return 1;
    }

    izlazni = fopen("rezultat.txt", "wt");
    if(izlazni == NULL)
    {
        printf("Greska pri otvaranju drugog fajla!");
        return 2;
    }

    fscanf(ulazni,"%d%d",&a,&b);
    fprintf(izlazni,"%d",a + b);

    fclose(ulazni);
    fclose(izlazni);

    printf("Gotovo!");

    return 0;
}


