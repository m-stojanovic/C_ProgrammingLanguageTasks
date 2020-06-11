#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d",&d);
    switch (d) {
        case 1: printf("Ponedeljak");
                break;
        case 2: printf("Utorak");
                break;
        case 3: printf("Sreda");
                break;
        case 4: printf("Cetvrtak");
                break;
        case 5: printf("Petak");
                break;
        case 6: printf("Subota");
                break;
        case 7: printf("Nedelja");
                break;
        default: printf("Uneli ste pogresan broj");
    }
    return 0;
}
