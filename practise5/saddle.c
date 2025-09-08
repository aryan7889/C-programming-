#include <stdio.h>
int main(){
    char operator;
    double num1,num2,answer;
    printf("Enter the operator (+,-,/,*)\n");
    printf("+ for addition.\n");
    printf("- for the subtraction.\n");
    printf("/ for the divide.\n");
    printf("* for the multiplication.\n");
    scanf("%c",&operator);
    printf("enter the two numbers: \n");
    scanf("%lf %lf",num1,num2);
    switch (operator)
    {
    case '+':
        answer = num1 + num2;
        printf("%lf + %lf = %lf",num1,num2,answer);
        break;
    case '-':
        answer = num1 - num2;
        printf("%lf - %lf = %lf",num1,num2,answer);
        break;
    case '/':
        answer = num1/num2;
        printf("%lf/%lf = %lf",num1,num2,answer);
        break;
    case '*':
        answer = num1*num2;
        printf("%lf*%lf = %lf",num1,num2,answer);
        break;
    default:
        break;
    }

}