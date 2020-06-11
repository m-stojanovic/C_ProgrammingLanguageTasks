#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int x = ( ( (a>b) && (a<c) )   ||   ( (a<b) && (a>c) ) ) * a;
    int y = ( ( (b>a) && (b<c) )   ||   ( (b<a) && (b>c) ) ) * b;
    int z = ( ( (c>a) && (c<b) )   ||   ( (c<a) && (c>b) ) ) * c;
    // x=a ako je srednji broj a, ako nije x=0;
    // y=b ako je sredjni broj b, ako nije y=0;
    // z=c ako je srednji broj c, ako nije z=0;
    int xy= ( (a==b) && (c>a) ) * a;
    int yz= ( (b==c) && (a>b) ) * b;
    int xz= ( (a==c) && (b>a) ) * c;
    //xy=a, ako su prva dva jednaka i manja od treceg, ako ne xy=0
    //xz=a ako su prvi i treci jednaki i manji od drugog, ako ne xz=0
    //yz=b ako su drugi i treci jednaki i manji od prvog, ako ne yz=0
    int xy1= ( (a==b) && (c<a) ) * a;
    int yz1= ( (b==c) && (a<b) ) * b;
    int xz1= ( (a==c) && (b<a) ) * c;
    //xy1=a, ako su prva dva jednaka i veca od treceg, ako ne xy=0
    //xz1=a ako su prvi i treci jednaki i veca od drugog, ako ne xz=0
    //yz1=b ako su drugi i treci jednaki i veca od prvog, ako ne yz=0
    int xyz= ((a==b) && (a==c)) * a;
    // xyz=a ako su sva tri broja jednaka ako nisu xyz=0
    int resenje=x+y+z+xy+yz+xz+xy1+yz1+xz1+xyz;
    printf("%d", resenje);
    return 0;
}
