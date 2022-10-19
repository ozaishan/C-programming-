#include<stdio.h>
int main()
{
    int num1, num2, count=0, sum=0;
    printf("Enter the number1:");
    scanf("%d", &num1);
    printf("Enter the number 2:");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)

    {
        if(i%2!=0)
        {
            count++;
            printf("%d is odd number \n", i);
            sum= sum+i;
        }
// if the program asks sum of odd numbers between 1 to 100 then 

    }
    printf("there are %d odd numbers between %d and %d\n ", count, num1, num2);
    printf("the sum of odd numbers between %d and %d is %d\n", num1, num2, sum);
    return 0;
}