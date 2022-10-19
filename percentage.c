#include<stdio.h>
 int main() {
float percentage, total;
int sub1, sub2, sub3;
resub1: 
printf("enter marks in sub 1 : \n");
scanf("%d", &sub1);
if (sub1 > 100)
{
    printf("Enter marks less than 100  \n");
    goto resub1;
    
}
resub2:
printf("enter marks in sub 2 : \n");
scanf("%d", &sub2);
if (sub2 > 100)
{
    printf("Enter marks less than 100\n");
    goto resub2;
}
resub3:
printf("enter marks in sub 3 : \n");
scanf("%d", &sub3);
if (sub3 > 100)
{
    printf("Enter marks less than 100\n");
    goto resub3;
}


total =(float) sub1+sub2+sub3;
percentage= total/3;
printf("The percentage obtained is %f %% \n", percentage);
 }