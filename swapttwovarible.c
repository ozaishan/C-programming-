#include<stdio.h>
 void swap(int a, int b);

int main(){
    int a=3, b=4; 
    printf("before swapping:%d and %d", a, b);
    swap(a,b);
    printf("after swapping :%d and %d", a, b);
    return 0;
}   
void swap(int a, int b){
   int temp;
   temp = a;
   a = b;
   b= temp;
}