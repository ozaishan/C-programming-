#include<stdio.h>
int resum();
int main(){
    int resultant;
    resultant= resum();
    printf("The sum of numbers that are divisible by 7 and not divisible by 3 is %d\n ", resultant);
    return 0;
    }

    int resum() {
     int i, count=0, sum=0;
    for ( i = 1; i < 100; i++)
    
    {
     if (i%7==0 && i%3!=0 )
     {
        sum= sum+i;
        printf("%d\n", i);
        count++;
     }
       
    }
    printf("there are %d numbers divisible by 7 and not divisible by 3\n", count);
    return sum;
    }