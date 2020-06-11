#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zbir = 0, brojac = 0;
    int n,i;
    double resenje;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            brojac++;
            zbir = zbir + i;
        }
    }
    resenje = 1.0*zbir/brojac;
    printf("%lf",resenje);
    return 0;
}

/*
Brojac je redni broj delioca broja n, zbir je zbir svih delioca broja n. ( jer se i - koji je delioc broja n dodaje
na zbir cija je pocetna vrednost 0 , tako da zbir jeste zbir svih delioca i broja n.
Potrebno je da prodjemo kroz sve brojeve od 1 do n, i da vidimo da li svaki od njih deli broj n, ako ga deli,
onda cemo povecati brojac za 1, i povecati ukupan zbir svih delioca za broj i sa kojim je broj n deljiv..
Jer smo nasli da i deli n ( n%i == 0). Ovo 1.0 nam sluzi da bismo promenili tip podatka zbir iz inta u float,
jer ako delimo dva inta onda je to celobrojno deljenje.
Primer: n = 6 , pocetni zbir = 0 , pocetni brojac = 0 i=1;
za n % 1 == 0 -> n % i -> 6 % 1 = 6 TACNO OSTATAK == 0  -> brojac dobija vrednost 1 jer je jedan broj za sad delioc
broja n. Onda zbir = 0 + 1 ( i ) = 1 resenje = 1.0*1/1 = 1
za n % 2 == 0 -> n % i -> 6 % 2 = 3 TACNO OSTATAK == 0  -> brojac dobija vrednost 2 jer su dva broja za sad delioci
broja n. Onda zbir = 1 + 2 ( i ) = 3 resenje = 1.0*3/2 = 1.5
za n % 3 == 0 -> n % i -> 6 % 3 = 2 TACNO OSTATAK == 0  -> brojac dobija vrednost 3 jer je treci broj koji je delioc
broja n. Onda zbir = 3 + 3 ( i ) = 6 resenje = 1.0*6/3 = 2.0
za n % 6 == 0 -> n % i -> 6 % 6 = 1 TACNO OSTATAK == 0  -> brojac dobija vrednost 4 jer je cetvrti broj koji je delioc
broja n. Onda zbir = 6 + 6 ( i ) = 12 resenje = 1.0*12/4 = 3.0

*Brojeve 4 i 5 nismo racunali jer ne ispunjavaju uslov (n % i == 0) -> 6 % 4 = 2 , 6 % 5 = 1 NIJE == 0 !

*/
