#include <stdio.h>
#include <stdlib.h>

int matrix[10][10];
int visited[10][10];
int n;

int isSafe(int i, int j) {
    if (visited[i][j]==1) return 0;
    if (i<0 || i>=n || j<0 || j>=n) return 0;
    return 1;
}

void DFS(int i, int j, int r[], int c[]) {
    if (visited[i][j]==0) {
        visited[i][j]=1;
        int x,i1,j1;
        for (x=0;x<4;x++) {
            i1=i+r[x];
            j1=j+c[x];
            if (isSafe(i1,j1)) {
                DFS(i1,j1,r,c);
            }
        }
    }
}
int main()
{

    int i,j;
    scanf("%d", &n);
    int r[8];
    int c[8];
    r[0]=-1; r[1]=1; r[2]=0; r[3]=0;
    c[0]=0; c[1]=0; c[2]=1; c[3]=-1;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]) visited[i][j]=1;
            else visited[i][j]=0;
        }
    }
    int result=0;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (!visited[i][j]) {
                result++;
                DFS(i,j,r,c);
                }
        }
    }
    printf("%d", result);

    return 0;
}



