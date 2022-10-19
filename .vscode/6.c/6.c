// program using recursion
#include<stdio.h>

long long int fact(int x); // function prototype


int main(){
    int n;
    printf("Enter a number whose Factorial is to be determined: \n ");
    scanf("%d", &n);
    printf("The factorial of %d is %d \n",n ,fact(n));// function call 
    return 0;

}
 long long int fact(int x)   // function body 
{
if (x==1 || x==0){
 return 1;   
}
else
{
    return x*fact(x-1);
}


}

