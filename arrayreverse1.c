#include<stdio.h>
void reverse(int *arr, int n);

int main(){
    int arr[] = {3,1,4,2,0,5};
    reverse(arr, 6);
    for(int i=0; i<6; i++){
         printf("The value of %d element is: %d\n", i, arr[i]);
    }
    return 0;
}
void reverse(int *arr, int n);{
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}