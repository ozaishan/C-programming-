#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main() {
    int choice, length, breadth, base, height;
    float radius, area;
    printf("Press the following numbers to calculate : \n * press 1 for area of circle * \n press 2 for area of triangle \n press 3 for area of rectangle ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    printf("Enter the radius of the circle :");
    scanf("%f", radius);
    area = PI* pow(radius, 2);
    printf("the area of circle is : %f ", area); 
    break;

    case 2:
    printf("Enter the base and height  of the triangle :");
    scanf("%d %d", base, height );
    area = (base*height)/2;
    printf("the area of triangle is : %f ", area); 
    break;

    case 3:
    printf("Enter the length and breadth of the rectanglee :");
    scanf("%d", length, breadth);
    area = length*breadth;
    printf("the area of rectangle  is : %d ", area); 
    break;
    
    default:
    printf("please enter the valid number");
        break;
    }
    return 0;
}   