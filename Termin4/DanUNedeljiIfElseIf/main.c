#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d",&d);
    if (d==1) printf("Ponedeljak");
    else if (d==2) printf("Utorak");
    else if (d==3) printf("Sreda");
    else if (d==4) printf("Cetvrtak");
    else if (d==5) printf("Petak");
    else if (d==6) printf("Subota");
    else if (d==7) printf("Nedelja");
    else printf("Uneli ste pogresan broj");

    return 0;
}
