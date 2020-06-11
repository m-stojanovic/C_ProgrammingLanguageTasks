// 5. Napisati program koji ispisuje broj reči i broj karaktera iz ulaznog fajla.
//
// Ulaz:
// input.txt:
// line 1
// line 2
//
// Izlaz:
// Broj reči: 4
// Broj karaktera: 13

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//int numberOfWords(char* string) {
//	int n = strlen(string);
//	int i;
//	int cnt = 0;
//
//	for (i = 0; i < n; i++) {
//		if (string[i] == ' ' || string[i] == '\n') {
//			cnt++;
//		}
//	}
//
//	return cnt;
//}
//
//int numOfChars(char* string) {
//	return strlen(string);
//}

int main()
{
	// char line[256];
 //    int words = 0;
 //    int chars = 0;
 //    FILE *in = fopen("input-05.txt", "r");

 //    if (in == NULL) {
 //        printf("Neuspesno otvaranje fajla!");
 //        return 1;
 //    }

 //    while (!feof(in)) {
 //        fgets(line, 256, in);
 //        words += numberOfWords(line);
 //        chars += numOfChars(line);
 //    }

 //    printf("Broj reci: %d\n", words);
 //    printf("Broj karaktera: %d\n", chars);

 //    fclose(in);

	FILE *file;
    char filename[256] = "ulazni.txt";
    char ch;
    char prevch = '\0';

    int lines = 0;
    int words = 0;
    int characters = 0;

    file = fopen(filename, "r");
    if(file == NULL)
    {
        fprintf(stderr, "Cannot open file %s \n", filename);
        exit(-1);
    }

    while((ch = fgetc(file)) != EOF)
    {
        if(isspace(ch))
        {
            if (ch == '\n')
                lines++;
        }else {
            if (prevch == '\0' || isspace(prevch))
                words++;
        }

        characters++;
        prevch = ch;
    }

    fclose(file);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

	return 0;
}
