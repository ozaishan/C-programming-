#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int i, totalchar;
    totalchar=0;
    printf("ENter your name : \n");
    scanf("%s", &name);
    while (name[i]!='\0')
    {
        if (name[i]!=' ')
        {
            totalchar++;
        }
        
    }
    printf("the total character of the given string is %d", totalchar);
}