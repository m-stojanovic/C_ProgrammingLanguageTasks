#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
int a1,b1,a2,b2,p1,p2;
scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
p1 = (a1*b1)/2;
p2 = (a2*b2)/2;
if (p1>p2) printf("1");
else if (p2>p1) printf("2");
else printf("0");
return 0;
}
/*
Napisati program koji za učitane vrednosti kateta dva pravougla trougla, ispisuje koji trougao ima veću površinu.
Na standardni ulaz se unose a1,b1,a2,b2, dužine kateta prvog i drugog trougla respektivno. Dužine su realni brojevi.
Na standardni izlaz se ispisuje 1 ukoliko je povšina prvog trougla veća. Ukoliko je površina drugog trougla veća
ispisuje se 2, a ako su površine jednake ispisuje se 0.
*/
