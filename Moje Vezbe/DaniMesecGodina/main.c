// 5. Za uneti mesec i godinu, ispisati broj dana u tom mesecu. (Iako su stvarna
// pravila složenija, za potrebe primera je dovoljno da se samo godine deljive sa
// četiri smatraju prestupnim)

#include <stdio.h>

int main()
{
    int mesec, godina;
    int prestupna = 0;

    printf("Unesite mesec i godinu\n");
    scanf("%d %d", &mesec, &godina);

    if (godina % 4 == 0) {
        prestupna = 1;
    }

    switch(mesec) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Mesec ima 30 dana");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Mesec ima 31 dan");
            break;
        case 2:
            if (prestupna) {
                printf("Mesec ima 29 dana");
            } else {
                printf("Mesec ima 28 dana");
            }

            break;
    }

    return 0;
}
