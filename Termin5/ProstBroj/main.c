#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int prost=1;
    for (i = 2 ; i<n ; i++) { // i nije 1 i nije n jer ukoliko je broj deljiv sa 1 i sa n onda je prost
        if (n%i==0) {
            prost = 0;
        }
    }
    if (prost == 0) printf("slozen");
    else printf("prost");
    return 0;
}
