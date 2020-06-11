#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {Google,Facebook,Xerox,Yahoo,Ebay,Microsoft};
    enum Company XEROX = Xerox; // Mora prvo da ide nepoznata promenljiva XEROX pa onda = poznata promenljiva Xerox
    enum Company GOOGLE = Google;
    enum Company EBAY = Ebay;
    printf("%d%d%d",XEROX,GOOGLE,EBAY);
    return 0;
}
