#include <stdio.h>
#include <string.h>


int main()
{
    char str1[100],str2[100],str3[100];

    printf("Unesite string 1: ");
    gets(str1);

    printf("Unesite string 2: ");
    gets(str2);

    printf("Duzina string 1: %d\n",strlen(str1));
    printf("Duzina string 2: %d\n",strlen(str2));

    printf("Duzi string se nalazi na poziciji: %d\n",strcmp(str1,str2));

    strcpy(str3,str1);
    strcat(str3,str2);

    printf("Novo formirani string3 je: %s",str3);

    return 0;
}
