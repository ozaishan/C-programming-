#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num, digit, sum=0, i, fact=1;
    printf("Enter a number \n");
    scanf("%d",&num);
 
    int temp = num; //Copying original number
 
    while(temp>0){
        digit = temp%10;
 
        //Calculating factorial of digit
        fact=1;
        for(i=1; i<=digit; i++){
            fact = fact*i;
        }
 
        //Adding Factorial
        sum += fact;
 
        temp = temp/10;
    }
 
    if(sum == num)
        printf("Strong Number \n");
    else
        printf("Not a Strong Number \n");
 
    return 0;
}

