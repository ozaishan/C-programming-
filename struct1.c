#include<stdio.h>
#include<string.h>
struct courseRec 
{
    char subject_code[8];
    char subject_title[30];
    int subject_credit;
    int no_of_students;
};
struct courseRec cRec;
int main(){
    printf("\n\n********Enter the information************\n\n ");
    printf("Enter subject code : \n");
    gets(cRec.subject_code);
    printf("Enter number of students enrolled: \n");
    scanf("%d", &cRec.no_of_students);
    cRec.subject_credit=4;
    printf("enter the subject title: \n");
    scanf("%s", cRec.subject_title);

printf("%s\t", cRec.subject_code);
printf("%s\t", cRec.subject_title);
printf("%d\t", cRec.subject_credit);
printf("%d\t", cRec.no_of_students);
}
