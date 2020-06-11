#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unos;
        printf("Unesite sekunde:\n");
        scanf("%d", &unos);
        int sati, minuti, sekunde;
        sati = unos / 3600;
        minuti = (unos % 3600) / 60;
        sekunde = (unos % 3600) % 60;
        printf("%d:%d:%d\n",sati,minuti,sekunde);
    return 0;
}



/*
Za nedelje:
int main () {

long unos;
    printf("Unesite sekunde:\n");
    scanf("%lu",&unos);
    long nedelja,dani,sati,minuti,sekunde;
    nedelja = unos / 604800;
    dani = ( unos % 604800 ) / 86400;
    sati = ( unos % 86400 ) / 3600;
    minuti = ( unos % 3600 ) / 60;
    sekunde = unos % 60;
    printf("%lu:%lu:%lu:%lu:%lu;",nedelja,dani,sati,minuti,sekunde);
return 0;

} */
