#include<stdio.h>
int main(){
    int num[12];
    int i;
    for ( i = 0; i < 12; i++)
    {
        printf("enter %d value: ", i+1);
        scanf("%d", &num[i]);
    }
    for ( i = 0; i < 12; i++)
 {
    
    if (num[i]==num[i+1])
    {
        printf("%d", i);
    }
 }  
    
}