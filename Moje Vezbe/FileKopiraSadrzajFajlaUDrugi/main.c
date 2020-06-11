#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[1024];

    FILE *prvi,*drugi;
    prvi = fopen("ulazni.txt", "rt");
    if ( prvi == NULL )
    {
        printf("Greska 1!");
        return 1;
    }

    drugi = fopen("izlazni.txt", "w");

    while(!feof(prvi))
    {
        fgets(tekst, 1024, prvi);
        fprintf(drugi, "%s", tekst);
    }

    printf("Gotovo!");

    fclose(prvi);
    fclose(drugi);

    return 0;
}
