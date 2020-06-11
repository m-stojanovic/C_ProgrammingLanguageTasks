// 6. Omogućiti korisniku da unese 10 celih brojeva, a zatim ih ispisati obrnutim
// redosledom.

#include <stdio.h>

int main()
{
    int niz[10];
    int i;

    printf("Unesi 10 celih brojeva\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &niz[i]);
    }

    for (i = 9; i >= 0; i--) {
        printf("%d ", niz[i]);
    }

    return 0;
}
