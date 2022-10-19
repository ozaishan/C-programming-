#include<stdio.h>
void readarr(int arr[], int n);
void printarr(int arr[], int n);
int i=0, j=0, arr[100];
int main(){
    int n;
     printf("enter the size of array: ");
     scanf("%d", &n);
     readarr(arr, n);
     printarr(arr, n);

}
void readarr(int arr[], int n){
    for ( i = 0; i < n ; i++)
    {
        printf("enter the data of  student %d : ", i+1);
        scanf("%d", &arr[i]);        
    }
    
}
void printarr(int arr[], int n){
     for ( i = 0; i < n ; i++)
    {
        printf(" the data of  student %d  and their marks is : %d\n", i+1, arr[i]);
               
    }
     
}