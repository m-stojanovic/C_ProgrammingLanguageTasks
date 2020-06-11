#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abzd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2); // ako je str1 veci izbaci broj 1, ako je str2 veci izbaci broj -1
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3); // ako su jednaki izbaci broj 0
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
