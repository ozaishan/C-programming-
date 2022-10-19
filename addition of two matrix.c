#include<stdio.h>
int main()
{
      int row,col,a[10][10],b[10][10],c[10][10],i,j;
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of col: ");     /* 1[0] 2[1] 3 4 5*/        
    scanf("%d", &col);
       printf("Enter number of elements for matrix A: ");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &a[i][j]);
        }
    }

 for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t", a[i][j]);

        }
        printf("\n");
 }
 return 0;
}