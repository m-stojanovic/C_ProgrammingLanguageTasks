#include <stdio.h>
#include <stdlib.h>
int row, column;
int table[9][9];

int findFirst() {
    for (row=0;row<9;row++) {
        for (column=0;column<9;column++) {
            if (table[row][column]==0) {
                return 1;
            }
        }
    }
    return 0;
}
int inRow(int r, int b) {
    int x;
    for (x=0;x<9;x++) {
        if (table[r][x]==b) return 1;
    }
    return 0;
}
int inColumn(int c, int b) {
    int x;
    for (x=0;x<9;x++) {
        if (table[x][c]==b) return 1;
    }
    return 0;
}
int inSquare(int r, int c, int b) {
    int x,y;
    for (x=0;x<3;x++) {
        for (y=0;y<3;y++) {
            if (table[r+x][c+y]==b) return 1;
        }
    }
    return 0;
}

int isSafe(int r, int c, int b) {
    return (!inRow(r,b) && !inColumn(c,b) && !(inSquare(r-r%3,c-c%3,b)));

}

int solve() {
    if (!findFirst()) {
        return 1;
    }
    int num;
    int r=row;
    int c=column;
    for (num=1;num<10;num++) {
       if (isSafe(r,c,num)) {
            table[r][c]=num;
            if (solve()) return 1;
            table[r][c]=0;
       }
    }
    return 0;
}

void printTable() {
    int i,j;
    for (i=0;i<9;i++) {
        for (j=0;j<9;j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

int main()

{
    solve();
    printTable();
    return 0;
}
