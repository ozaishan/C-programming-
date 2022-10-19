#include<stdio.h>
int main(){
    int rows, columns, a[10][10], Trans[10][10];
    int i, j;
    printf("Enter the number of rows : \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &columns);
    printf("Enter the elements of A matrix:");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; i++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
        for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; i++)
        {
            Trans[j][i]= a[i][j];
        }
        
    }
      for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; i++)
        {
           printf("%d\t", Trans[i][j]);
        }
        printf("\n");
    }
    

}