#include<stdio.h>
#include<conio.h>
void result();
char name[50];
    int roll_num;
  
int main(){

    
  printf("Enter the students name : ");
    scanf("%s", &name);
      printf("Enter the roll number : ");
    scanf("%d", &roll_num);
    result();
    



}
void result(){
 
 int marks;
 reenter:
 printf("enter your marks : \n ");
 scanf("%d", &marks);
 if(marks>100 || marks < 0)
 {
    printf("you entered invalid marks!! please enter a valid marks again \n ");
 goto reenter;
 }
    else if(marks<=100 && marks >= 80)
    {
        printf("Your grade is A+\n");
    }
    else  if(marks<80 && marks>= 75)
    {
          printf("Your grade is A-\n");
    }
    else if(marks <75 && marks >= 70)
    {
          printf("Your grade is A\n");
    }
    else if(marks<70 && marks >= 65)
    {
          printf("Your grade is B+\n");
    }
    else if(marks<65 && marks >= 55)
    {
          printf("Your grade is B-\n");
    }
    else if(marks<55 && marks >= 50)
    {
          printf("Your grade is b\n");
    }
    else if(marks<50 && marks >= 45)
    {
          printf("Your grade is c+\n");
    }
    else if(marks<45 && marks >= 40)
    {
          printf("Your grade is c\n");
    }
    else
    {
        printf("You are fail better luck next time :) \n ");
    }
    printf("  ****** result****** \n **name :  %s\n *** roll no %d\n ****marks %d\n  ", name, roll_num, marks);
}