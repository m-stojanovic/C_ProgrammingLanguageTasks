#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studenti.h"

int main()
{
    Student string[256];
    int n;
    int i;

    printf("Koliko studenata hocete da prijavite?\n");
    scanf("%d",&n);
    getchar();

    upisivanjeStudenata(string, n);
    ispisavanjeStudenata(string, n);

    return 0;
}
