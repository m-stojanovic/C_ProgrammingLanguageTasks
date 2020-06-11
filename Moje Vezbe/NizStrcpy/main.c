#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  strcpy (str2,str1);
  strcpy (str3,"copy successful");
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}

//#include <stdio.h>
//#include <string.h>

//int main()
//{
//    char str1[10]= "awesome";
//    char str2[10];
//    char str3[10];
//
//    strcpy(str2, str1);
//    strcpy(str3, "well");
//    puts(str2);
//    puts(str3);
//
//    return 0;
//}
