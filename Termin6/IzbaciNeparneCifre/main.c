#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tezina = 1;
    int n,resenje=0, cifra;
    scanf("%d",&n);
    while (n>0) {
        cifra = n % 10;
        n = n / 10;
        if (cifra%2==0) {
            resenje = resenje + tezina*cifra;
            tezina = tezina * 10;
        }
    }
    printf("%d",resenje);
    return 0;
}
/*
Imamo broj: 25436
25432 > 0
cifra=25432 % 10 = 2
n = 25432 / 10 = 2543
cifra = 2543 % 10 = 3
n = 2543 / 10 = 254
cifra = 254 % 10 = 4
n = 254 / 10 = 25
cifra = 25 % 10 = 5
n = 25 / 10 = 2
cifra = 6 % 10 = 6
cifre su : 2 5 4 3 6
resnje = 0
tezina = 1
if ( cifra % 2 == 0 )
Za prvu cifru: resenje = 0 + 1*2 = 2
Za trecu cifru: tezina = 1 * 10 = 10 resenje = 2 + 10 * 4 = 2 + 40 = 42
Za petu cifru: tezina = 10 * 10 = 100 resenje = 42 + 100 * 6 = 42 + 600 = 642 ( to su ispisane parne cifre )
*/
