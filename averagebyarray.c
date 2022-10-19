#include<stdio.h>
  void readarr(int arr[], int N);
  
int main(){
    int  N;
    int arr[N];
     printf("Enter the numbers you want to store in one dimensional array: ");
     scanf("%d", &N);
     readarr(arr, N);

     
    return 0;
}
void readarr(int arr[], int  N){
    for (int i = 0; i < N; i++)
    {
        printf("Enter the value for %d index in array:", i);
        scanf("%d", &arr[i]);
    }
    float sum=0;
    float average;
    for (int  i = 0; i < N; i++)
    {
        sum=sum+ arr[i];
    }
    average= sum/N;
    printf("the average of the sum of the arrays are : %f", average);
}