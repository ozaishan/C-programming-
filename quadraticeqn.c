#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, discriminant, root1, root2, root3, imagnarypart, realpart;
     printf("Enter the coefficient of a : \n");
    scanf("%lf", &a);
    printf("Enter the coefficient of b : \n");
    scanf("%lf", &b);
    printf("Enter the coefficient of c : \n");
    scanf("%lf", &c);
    discriminant= pow(b,2)-4*a*c;
    if (discriminant>0)
    {
        root1= (-b + sqrt(discriminant))/2*a;
        root2= (-b - sqrt(discriminant))/2*a;
        printf("the roots of the given number are %lf and %lf ", root1, root2);

    }
    else if (discriminant==0)
    {
        root1=root2= -b / (2*a);
        printf("root 1 = %lf and root 2 = %lf", root1, root2);

    }
    else
    {
        realpart= -b/(2*a);
        imagnarypart= sqrt(-discriminant)/2*a;
        printf("root 1 = %lf+%lfi and root 2 is %lf-%lfi", realpart, imagnarypart, realpart, imagnarypart);
    }
    
    
    
}