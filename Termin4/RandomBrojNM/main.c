#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((time(0)));
    int n,m;
    scanf("%d%d",&n,&m);
    int r = rand();
    int ostatak = r % (m-n+1);
    int resenje = n + ostatak;
    printf("%d",resenje);
    return 0;
}

/*
int main(){
    int n,m;
    int rndbroj;

    srand(time(0));

    scanf("%d%d",&n,&m);
    rndbroj = rand()%(m-n+1) + n;
    printf("%d", rndbroj);
    return 0;
}
*/
