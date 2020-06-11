#include <stdio.h>
#include <stdlib.h>

int main () {
    float farenh, celzijus;
    float lower,upper,korak;
    lower = 0;
    upper = 300;
    korak = 20;
    farenh = lower;
    while (farenh<=upper) {
        celzijus = 5*(farenh-32)/9;
        printf("%3.0f\t%6.1f\n",farenh,celzijus);
        farenh=farenh+korak;
    }
    return 0;

}
/*
printf("%3d\t%6d\n",farenh,celzijus); Da bismo prvi broj svakog reda prikazali u polju sirine od tri cifre "%3d"
a u polju sirine sest cifara "%6d"
%.0f - govori da broj treba prikazati bez decimalne tacke i decimalnih cifara.
*/

/*
Moze i ovako sa naredbom FOR:
int main () {
int farenh;
for (farenh = 0; farenh <=300; farenh = farenh + 20) {
    printf("%3d\t%6.1f\n", farenh, (5.0/9.0)*(farenh-32));
}
return 0;
}
*/
