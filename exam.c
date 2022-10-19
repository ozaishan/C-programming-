#include<stdio.h>
int main() {
    int i,j,a[4][4];
    printf("Enter elements for matrix: ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        int sum=0;
        for(j=0;j<4;j++){
            sum = sum+a[i][j];
            printf("%d\t", a[i][j]);
        }
        printf("Sum = %d", sum);
        printf("\n");
    }
}