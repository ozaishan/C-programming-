#include<stdio.h>
#include<math.h>
#include<conio.h>
int fact (int n);
int isprime(int p);
int main(){
    int number, isprimeornot;
    unsigned long long factorial;
    printf("enter a number: ");
    scanf("%d", &number);
    factorial = fact(number);
    
    printf("the factorial of the given number is %d\n", factorial);
    isprimeornot = isprime(factorial);
    if (isprimeornot==0)
    {
        printf("the number is not prime number");
    }
    if(isprimeornot==1)
    {
        printf("the number is prime number");
    }
    
    return 0;
}
int fact(int n){
    unsigned long long int fac=1;
    for (int i = 1; i <= n; ++i)
    {
        fac= fac*i;
    }
    return fac;
}
int isprime(int p){
    for ( int i = 2; i < p; i++)
    {
       if(p%i==0)
       {
        return 0;
       }
       else 
       return 1; /* code */
    }
    
}