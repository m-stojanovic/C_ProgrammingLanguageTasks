#include <stdio.h>
#include <stdlib.h>

int main () {

int a,b;

scanf("%d%d", &a, &b);

int zbir = a + b;

int razlika = a - b;

int proizvod = a * b;

int celobrojniKolicnik = a / b;

int ostatak = a % b;

printf("%d %d %d %d %d", zbir, razlika, proizvod, celobrojniKolicnik, ostatak);

return 0;

}
