#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "osoba.h"

void upisivanjeOsoba(Osobe *str)
{
    fflush(stdin);
    printf("Ime: ");
    gets(str->ime);
    printf("Visina: ");
    scanf("%f",&str->visina);
    printf("Tezina: ");
    scanf("%f",&str->tezina);
    getchar();
    printf("\n");
}

void ispisivanjeOsoba(Osobe *str)
{
    printf("Ime: %s\n", str->ime);
    printf("Visina: %.2f\n", str->visina);
    printf("Tezina: %.2f\n", str->tezina);
    printf("BMI: %.2f\n\n", BMI(str->visina, str->tezina));
}

float BMI(float tezina, float visina)
{
    return tezina / sqrt(visina);
}

float MinBMI(Osobe niz[], int n)
{
    float min = BMI(niz[0].tezina, niz[0].visina);
    int i;

    for (i = 0; i < n; i++)
    {
        float bodimass = BMI(niz[i].tezina, niz[i].visina);

        if (bodimass < min)
        {
            min = bodimass;
        }
    }

    return min;
}

int IndexBMI(Osobe niz[], int n)
{
	float min = BMI(niz[0].tezina, niz[0].visina);
	int index = 0;
    int i;

	for (i = 0; i < n; i++) {
		float bodimass = BMI(niz[i].tezina, niz[i].visina);

		if (bodimass < min) {
			min = bodimass;
			index = i;
		}
	}

	return index;
}
