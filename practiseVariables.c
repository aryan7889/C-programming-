#include <stdio.h>
#include <stdbool.h>

int main(){
float num1 = 15.5f;
float num2 = 4.2f;

float addition = num1 +num2;
float multiply = num1*num2;
float subtraction = num1-num2;
float division = num1/num2;

printf("the addition: %f + %f = %f\n",num1,num2,addition);
printf("the subtraction: %f - %f = %f\n",num1,num2,subtraction);
printf("the multiply: %f * %f = %f\n",num1,num2,multiply);
printf("the division: %f / %f = %f\n",num1,num2,division);

return 0;
}