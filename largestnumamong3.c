#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter a number : ");
    scanf("%d", &num2);
    printf("Enter a number : ");
    scanf("%d", &num3);
    if(num1>num2)
    {
        if (num1>num3)
        {
            printf("%d num 1 is the greatest number among 3 of them ",num1);
        }
        else{
            printf("%d num 3 is the greatest among three of them", num3);
        }
        
    }
    else 
    {
        if(num3> num2)
        {
            printf("%d num 3 is greatest among three", num3);

        }
        else
        {
            printf("%d num 2 is the greatest among three", num2);
        }
    }
    return 0;

}