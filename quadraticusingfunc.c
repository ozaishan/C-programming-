#include<stdio.h>
#include<math.h>
int quadratic(int a, int b, int c);
int main(){
    float a, b, c;
    printf("from the given quadratic equation : a*x*x+ b*x+ c");
   printf("Enter the value of a ");
   scanf("%f", &a);
   printf(" enter the values of b");
   scanf("%f", &b);
   printf("enter the value of c");
    scanf("%f", &c);
    quadratic(a, b, c);
    return 0;


}
int quadratic(int a, int b, int c){
 float x1, x2, discriminant;
 discriminant = b*b- 4*a*c;
 printf(" let us asssume that root will always be real\n");
 x1= (-b + sqrt(discriminant))/2*a;
 x2= (-b - sqrt(discriminant))/2*a;
 printf("the roots of the numbers are %f and %f", x1, x2);
 return 0;

}