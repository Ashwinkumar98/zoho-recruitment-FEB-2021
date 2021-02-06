#include<stdio.h>
#include<stdlib.h>

void printPattern(int n){
    int mat[n][n], r = n, c = n, k=0, i, j, tmp = n;

    while(k<n){
        i = k; /* Fill column value of matrix */
        while(i<c){
            mat[k][i] = tmp;
            i++;
        }
        i = k; /* Fill row value of matrix */
        while(i<r){
            mat[i][k] = tmp;
            i++;
        }
        k++;
        tmp--;
    }
    /* print the final pattern */
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter your input : ");
    scanf("%d",&n); /* Read the input from user */
    printPattern(n);
    return 0;
}
