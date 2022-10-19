#include<stdio.h>
#include<math.h>
int armstrong(int N);
int main() {
    int num, result_from_function;
    printf("Enter a three digit number");
    scanf("%d", &num);
    result_from_function= armstrong(num);
    if (result_from_function==num)
    {
        printf("%d is  an armstrong number\n", num);

    }
    else
    {
        printf("%d is not an armstrong number\n", num);
    }
    return 0;
}

int armstrong(int N)
{
    int originalnum, remainder, result=0;
    originalnum= N;
    while (originalnum!=0)
    {
        remainder=originalnum%10;
        result= result+ pow(remainder, 3);
        originalnum= originalnum/10;
        

    }
    return result;
}