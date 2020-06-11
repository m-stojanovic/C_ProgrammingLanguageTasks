#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *izlazni = fopen("izlazni.txt", "wt");

    int n;
    float f;
    char c[64];

    scanf("%d %f %s",&n,&f,c);

    fprintf(izlazni,"Int: %d | Float: %.2f | String: %s ", n, f, c);
    fclose(izlazni);

    return 0;
}
