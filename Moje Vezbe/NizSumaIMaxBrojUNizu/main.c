#include <stdio.h>
#include <string.h>


int main ()
{
    int prvi[10],drugi[10];
    int i,suma = 0,max = 0;

    for( i = 0; i < 10; i++ )
    {
        printf("Unesite broj %d.",i+1);
        scanf("%d",&prvi[i]);
    }

    for(i = 0; i < 10; i++ )
    {
        if(prvi[i]>max)
        {
            max = prvi[i];
        }
        suma = prvi[i] + suma;
    }
    printf("Najveci broj u nizu je bio: %d\n",max);
    printf("Suma svih brojeva u nizu je: %d ",suma);
    return(0);
}
