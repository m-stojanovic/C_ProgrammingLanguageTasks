// 3. Napisati program koji za dati niz A, dužine N i veličine "prozora" K pravi novi niz B na sledeći
// način: B[i] = A[i], ako je i + 1 < K, inače B[i] = (A[i] + A[i-1] + ... + A[i - K + 1]) / K.
//
// Ulaz:
// N = 7
// K = 3
// A = [5, 6, 3, 5, 8, 2, 1]
//
// Izlaz:
// B = [5, 6, 4, 4, 5, 5, 3]
// Link za Petlju: https://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/08_pokretni_prosek
/*
Prva linija standardnog ulaza označava broj elemenata u nizu (N = 7) i velicinu prozora (K = 3)
Nakon unosa niz A = {5, 6, 3, 5, 8, 2, 1}
Prateci formulu dobijamo da je: B[0] = 5 B[1] = 6 B[2] = (5 + 6 + 3) / 3 = 4 B[3] = (6 + 3 + 5) / 3 = 4
B[4] = (3 + 5 + 8) / 3 = 5 B[5] = (5 + 8 + 2) / 3 = 5 B[6] = (8 + 2 + 1) / 3 = 3 B = {5, 6, 4, 4, 5, 5, 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, k;
	int sum = 0;
    scanf("%d %d", &n, &k);
    int A[n];
    int B[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++) {
    	if (i + 1 < k) {
    		B[i] = A[i];
    	} else {
    		sum = 0;

    		// I nacin
    		for (j = i ; j >= i - k + 1; j--) {
    			sum += A[j];
    		}

    		// II nacin
			// for (j = 0; j < k; j++) {
			// 	sum += A[i - j];
			// }

    		B[i] = sum / k;
    	}
    }

    for (i = 0; i < n; i++) {
    	printf("%d ", B[i]);
    }

	return 0;
}
