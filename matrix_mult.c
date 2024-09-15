#include<stdio.h>

int main(){
    int a[10][10]; // matrix 1
    int b[10][10]; //matrix 2
    int r[10][10]; //product matrix
    int r1,c1,r2,c2; //columns and rows

    printf("Enter the amount of rows and columns for matrix A:");
    scanf("%d %d", &r1, &c1);

    printf("Enter the amount of rows and columns for matrix B:");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2){
        printf("Error: Multiplication not possible.\n");
        return 0; 
    }

    printf("Enter the elements for matrix A[%d][%d]:", r1,c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Elements [%d][%d]:", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for matrix B[%d][%d]:", r2,c2);
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Elements [%d][%d]:", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<r1;++i){
        for(int j=0;j<c2;++j){
            for(int k=0;k<c1;++k){
                r[i][j]=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resulting matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    
}
