#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){

    int a, b, c;

    float area, s;
    printf("enter the first side of triangle : \n");
    scanf("%d", &a); 
    printf("enter the second side of triangle : \n");
    scanf("%d", &b); 
    printf("enter the third  side of triangle : \n");
    scanf("%d", &c);

    s = (float)(a+b+c)/2;
    printf(" the perimeter of the sides of the triangle are : %f\n", s); 
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the traingle is : %f\n", area);
    return 0;
}