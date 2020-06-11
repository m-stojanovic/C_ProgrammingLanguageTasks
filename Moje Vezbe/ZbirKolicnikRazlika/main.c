#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b;
    scanf("%f%f", &a, &b);
    float zbir = a + b;
    float razlika = a - b;
    float kolicnik = a / b;
    printf("%.2f %.2f %.2f", zbir, razlika, kolicnik);
    return 0;
 }
