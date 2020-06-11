#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((time(0)));
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int donjaGranica,gornjaGranica;
    if (n%k==0) donjaGranica = n;
    else donjaGranica = n + k - n%k;
    if (m%k==0) gornjaGranica = m;
    else gornjaGranica = m - m%k;
    int umnozak = (gornjaGranica-donjaGranica) / k + 1;
    int ostatak = rand() % umnozak;
    int resenje = donjaGranica + ostatak*k;
    printf("%d",resenje);
    return 0;
}

/*
int main () {
    srand(time(0)) ;
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int donjaGranica,gornjaGranica;
    if ( n % k == 0 ) donjaGranica = n;
    else donjaGranica = n + k - n % k;
    if ( m % k == 0 ) gornjaGranica = m;
    else gornjaGranica = m - m % k;
    int resenje = (rand() % (gornjaGranica-donjaGranica)/k+1)*k + donjaGranica;
    printf("%d",resenje);
return 0;
}
*/

//u int resenje = donjaGranica +r*k ( r je jedan broj od 0 do 10 ? ) a rand()%umnozak  znaci
//r = ostatak deljenja nekog random broja (do random_max(32767))  sa 11 i uvek ostatak mora biti od 0 do 10
//tako da r ce ispasti jedan od brojeva izmedju 0 do 10 i kad se pomnozi sa  2 ispadju u opsegu od 8 do 28.
