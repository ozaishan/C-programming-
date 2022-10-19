#include<stdio.h>
int main(){
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    if (number%2==0 && number>0)
    {
        printf("The number you entered is even number and also a positive number ");
    }
    else if (number%2==0 && number<0)
    {
          printf("The number you entered is even number and also a negative number ");
    }
    else 
    {
        printf("The number you entered is odd number ");

    }
    return 0;

}