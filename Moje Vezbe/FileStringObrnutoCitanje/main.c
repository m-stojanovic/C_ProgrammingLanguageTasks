#include <stdio.h>

int main()
{
    int niz[50], max, i;
    FILE *f;

    f = fopen("zad2.txt", "rt");
    if(f == NULL)
    {
        printf("Ne mozemo otvoriti fajl 'zad2.txt' za citanje.\n");
        return 1;
    }

    fscanf(f, "%d", &max);

    for(i = 0; i < max; i++)
        {
            fscanf(f, "%d", &niz[i]);
        }
    fclose(f);

    for(i = max - 1; i >= 0; i--)
        {
            printf("%d ", niz[i]);
        }
    return 0;
}
