#include <stdio.h>
#include <stdlib.h>

int main() // Da je cifraJedinica deljiva sa  % 3 == 0
{
    int a,b,i,cifraJedinica;
    scanf("%d%d",&a,&b);
    for (i = a; i<b; i++) {
        cifraJedinica = i % 10;
        if ( (cifraJedinica % 3 == 0) && (cifraJedinica!=0) ) printf("%d\n",i);
    }
    return 0;
}

/*
int main() // da je ceo broj izmedju a i b deljiv sa % 3 == 0
{
    int a,b,i,cifraJedinica;
    scanf("%d%d",&a,&b);
    for (i = a; i<b; i++) {
        if (i % 3 == 0) printf("%d\n",i);
    }
    return 0;
}
*/
