#include<stdio.h>

int main(){

int num1, num2, num3, num4;

printf("Enter 4 numbers here...\n");

scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

if(num1>num2&&num1>num3&&num1>num4){

printf("%d (num1) is greatest",num1);

}

else if(num2>num3&&num2>num4){

printf("%d (num2) is greatest",num2);

}

else if(num3>num4){

printf("%d (num3) is greatest",num3);

}

else{

printf("%d (num4) is greatest",num4);

}

return 0;

}
