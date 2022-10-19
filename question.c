#include<stdio.h>
#include<string.h>

struct STUDENT
{
    char name[100];
    int symbolnumber;
    int marks[3];
    int total;
    float percentage;

};
struct STUDENT s[3];
struct STUDENT temp;
int i, j, k, sum=0;
int main(){
    printf("********Enter the information of the student*********\n");
    for ( i = 0; i < 3; i++)
    {
            printf("Enter name of the %d student", i+1);
            scanf("%s", s[i].name);
            printf("Enter symbol number of %d student", i+1);
            scanf("%d", &s[i].symbolnumber);
            printf("Enter the marks of each subject:\n");
             for ( j = 0; j < 3; j++)
        {
            printf("Enter marks for %d subject", j+1);
            scanf("%d", &s[i].marks[j]);
        }
            for ( j = 0; j < 3; j++)
        {
            sum= sum + s[i].marks[j];
        }
            s[i].total= sum;
            printf("The total marks is %d", s[i].total);
            s[i].percentage= ((float)s[i].total )/ 3;
            printf("the total percentage is : %f", s[i].percentage);
            sum=0;
    }
    
    for ( i = 0; i < 2 ; i++)
    {
        for ( k = i+1; i< 3; k++)

        {
         if (s[i].percentage<s[k].percentage)

         {
             temp= s[i];
             s[i]=s[k];
             s[k]=temp;
         }
         
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        printf("name : %s\n", s[i].name);
        printf("symbol number: %d\n", s[i].symbolnumber);
        printf("total marks: %d\n", s[i].total);
        printf("percentage: %f\n", s[i].percentage);
    }
    
    
    
}

