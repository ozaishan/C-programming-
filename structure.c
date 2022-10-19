#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    struct student
{
    char name[100];
    char birth_place[100];
    int age;
};

    struct student std[10];
    int i;
    for ( i = 1; i <= 3; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", std[i].name);
        
        printf("Enter the birthplace of the student: ");
        scanf("%s", std[i].birth_place);

        
        printf("Enter the age of the student: ");
        scanf("%d", &std[i].age);
    }

//  for ( i = 1; i <= 3; i++)
//     {
//         printf(" the name of the student %d is : %s\n", i, std[i].name);
        
        
//          printf(" the birthplace of the student %d is : %s\n", i, std[i].birth_place);
//            printf(" the age of the student %d is : %d\n", i, std[i].age);
//     }
    // for ( i = 1; i < 3; i++)
    // {
        
    
    // if (std[i].birth_place==std[i+1].birth_place)
    // {
    //     printf("%s %s are neighbours", std[i].name, std[i+1].name);
    // }
    // }
    for ( i =1 ; i <= 3-1; i++)
    {
        /* code */
    }
    
return 0;
    
    
}
