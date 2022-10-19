#include<stdio.h>
#include<math.h>
#include<conio.h>
int perfectos(int n);
int main()
{
    int number, result;
    printf("enter a number: \n");
    scanf("%d", &number);
    result=perfectos(number);
    if (result==1)
    {
        printf("%d is a perfect number", number );
    }
    else 
    {
        printf("%d is not a perfect number", number);
    }
    


}
int perfectos(int n){
    int result, sum=0;
    int i;
    for ( i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==n)
    {
        return 1;
    }
    else return 0;
    
    
}