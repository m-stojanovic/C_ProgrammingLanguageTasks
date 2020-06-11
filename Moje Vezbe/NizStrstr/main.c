#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle); //Trazi string 2 u string 1, i izbacuje nadjeno

   printf("The substring is: %s\n", ret);

   return(0);
}
