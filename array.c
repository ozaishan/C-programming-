#include<stdio.h>

int main(){
    int mark[10];
    int i;
    for ( i = 0; i< 10  ; i++)
    {
        printf("enter the marks obtained by the  student %d ", i+1);
        scanf("%d", &mark[i]);
    


    }
    for ( i = 0; i < 10 ; i++)
    {
        
    
    
    printf("the marks obtained by the students %d is : %d", i+1, mark[i] );
    }
}