#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination ");

   strcat(dest, src);

   printf("Final destination string : |%s|", dest); // mora da se stavi dest jer je dest prvi u strcat(dest,src)
                                                    // jer je u string dest nadovezan src
   return(0);
}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//   /* Define a temporary variable */
//   char example[100];
//
//   /* Copy the first string into the variable */
//   strcpy(example, "TechOnTheNet.com ");
//
//   /* Concatenate the following two strings to the end of the first one */
//   strcat(example, "is over 10 ");
//   strcat(example, "years old.");
//
//   /* Display the concatenated strings */
//   printf("%s\n", example);
//
//   return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main () {
//   char str1[50], str2[50];
//
//   //destination string
//   strcpy(str1, "This is my initial string");
//
//   //source string
//   strcpy(str2, ", add this");
//
//   //concatenating the string str2 to the string str1
//   strcat(str1, str2);
//
//   //displaying destination string
//   printf("String after concatenation: %s", str1); // mora da se stavi str1 jer je str1 prvi u strcat(str1,str2)
//
//   return(0);
//}
