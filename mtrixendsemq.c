#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    int i,j;
    int arr[n][n];
    printf("Enter the array: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    //for padding purposes.
    puts(" ");

     for(i=0;i<n;i++){
        int sum=0;
         for(j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        for(j=0;j<n;j++)
            printf("%d\t ",arr[i][j]);
         printf("Sum=%d\n",sum);
     }



}