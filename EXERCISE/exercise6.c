#include <stdio.h>
int main(){
    float num1 = 0;
    printf("type the number : ");
    scanf("%f",&num1);
    
    float num2 = 0;
    printf("type the number : ");
    scanf("%f",&num2);

    float result = 0;

    char operator = '\0';
    printf("which operation has to be performed (+,-,/,*): ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n",num1,num2,result);
        break;
    
    case '-':
        if (num1>num2)
        {
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f",num1,num2,result);
        }else{
            result = num2 - num1;   
            printf("%.2f - %.2f = %.2f",num2,num1,result);

        }
        break;
    
    case '*':
        result = num1*num2;
        printf("%.2f * %.2f = %.2f",num1,num2,result);
    break;

    case '/':
        if (num2 != 0)
        {
            result = num1/num2;
            printf("%.2f / %.2f = %.2f",num1,num2,result);
        }else{
            printf("ERROR: Invalid operatiion.");
        }
    break;
    default:
        printf("ERROR: Inavlid Operator.");
    }
return 0;
}