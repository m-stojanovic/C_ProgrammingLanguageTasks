#include <stdio.h>
#include <stdlib.h>


//1-2+3-4+5....n

int main()
{
    int zbir = 0;
    int znak = 1;
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        zbir = zbir + znak*i;
        znak = znak * (-1);
    }
    printf("%d",zbir);
    return 0;
}
/*
Za i = 1 znak = 1 zbir = 0 -> zbir = 0 + 1x1 = 1
Za i = 2 znak = 1 x (-1) = -1 -> prethodni zbir = 1 pa onda novi zbir = 1 + (-1)x2 = 1 + (-2) = -1
Za i = 3 znak = -1 x (-1) = 1 -> prethodni zbir = -1 pa onda novi zbir = -1 + (+1)x3 = -1 + 3 = 2
Za i = 4 znak = 1 x (-1) = -1 -> prethodni zbir = 2 pa onda novi zbir = 2 + (-1)x4 = 2 + (-4) = -2
Za i = 5 znak = -1 x (-1) = 1 -> prethodni zbir = -2 pa onda novi zbir = -2 + (+1)x5 = -2 +5 = 3
Za i = 6 znak = 1 x (-1) = -1 -> prethodni zbir = 1 pa onda novi zbir = 3 + (-1)x6 = 3 + (-6) = -3
I tako dalje.
Znaci za i = 1  zbir ( resenje ) je 1
Znaci za i = 2  zbir ( resenje ) je -1
Znaci za i = 3  zbir ( resenje ) je 2
Znaci za i = 4  zbir ( resenje ) je -2
Znaci za i = 5  zbir ( resenje ) je 3
Znaci za i = 6  zbir ( resenje ) je -3
*/
