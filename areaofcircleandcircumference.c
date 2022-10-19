#include<stdio.h>
#define PI 3.14
#include<math.h>


int main(){
    float radius, circumference, area;
    printf("Enter the radius of circle : \n");
    scanf("%f", &radius);
    area = PI * pow(radius,2);
    circumference= 2 * PI * radius;
    printf("the area of circle is : %.3f\n", area);
    printf("the circumference of the circle is : %f\n", circumference);
    return 0;


}