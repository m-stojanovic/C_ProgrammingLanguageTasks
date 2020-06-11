// 4. Proveriti da li je broj prost. (U prethodnom primeru, to bi značilo da postoji samo jedan
// delilac – broj 1)

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("Nije prost");
            return 0;
        }
    }

    printf("Broj je prost");
    return 0;
}
