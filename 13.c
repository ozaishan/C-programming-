#include<stdio.h>
int main(){
    int row,col,a[10][10],b[10][10],c[10][10],i,j;
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of col: ");     /* 1[0] 2[1] 3 4 5*/        
    scanf("%d", &col);

    printf("Enter number of elements for matrix A: ");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){2
        
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of elements for matrix B: ");
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &b[i][j]);
        }
    }
       for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
      } 
    return 0;

    /*a1[row1][col1]  a2[row1][col2]
    a3[row2][col1]  a4[row2][col2]  */

}

/* 1[0][0]    2[0][1]
    3[1][0]   4[1][1]*/