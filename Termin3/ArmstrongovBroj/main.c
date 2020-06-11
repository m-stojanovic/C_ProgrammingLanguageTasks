#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int cs = a / 100;
    int cd = (a/10) % 10;
    int cj = a % 10;
    if (a == cs*cs*cs+cd*cd*cd+cj*cj*cj) printf("Jeste Armstrongov broj");
    else printf("Nije Armstrongov broj");
    return 0;
}
/*
int main () {

int n;
scanf("%d",&n);
int ch, cs, cd, cj;
ch = n / 1000;
cs = ( n / 100) % 10;
cd = ( n / 10 ) % 10;
cj = n % 10;
if ( ch*ch*ch*ch+cs*cs*cs*cs+cd*cd*cd*cd+cj*cj*cj*cj == n )
{
    printf("Jeste Armstrong");
}
else if (cs*cs*cs+cd*cd*cd+cj*cj*cj == n )
{
    printf("Jeste trocifreni Armstrong");
}
else printf("Nije Armstrong");
return 0;

}
*/
