#include <stdio.h>
#include <stdlib.h>


int main () {
        char slovo;
        printf("Unesite slovo:\n",slovo);
        scanf("%c",&slovo);
        int k,broj;
        printf("Unesite broj:\n",broj);
        scanf("%d",&broj);
        k = slovo + broj;
        printf("Novo slovo: \n%c",k);
        return 0;


}

