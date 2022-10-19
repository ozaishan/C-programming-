#include<stdio.h>
int main() {

 float fahr;
 float celcius;
 printf("Enter the temperature in celcius scale : \n");
 scanf("%f", &celcius);
 fahr = (float)(((9*celcius)/5 ) + 32);
 printf(" The temperature of %f celcius  in fahrenheit scale is %f",celcius, fahr);
 return 0;
}