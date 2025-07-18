#include <stdio.h>
int main(){
    float num1 = 0;
    float num2 = 0;
    char operator = 0;
    float result = 0;

    printf("Basic Calaulator.\n");
    printf("Type the number 1 : ");
    scanf("%f",&num1);
    printf("Type the number 2: ");
    scanf("%f",&num2);
    printf("Give the operator:");
    scanf(" %c",&operator);

    if (operator != '+' && operator != '-' && operator != '*' && operator!= '/')
    {
        printf("Plz type the valid operator!");
        return 1;
    }
    if (operator == '/' && num2 == 0)
    {
        printf("The number 2 can't be 0.");
        return 1;
    }

    switch (operator)
    {
    case '+':
        printf("ADDITION OF THE TWO NUMBERS.\n");
        result = num1 + num2;
        printf("The result of the addition is : %.2f\n",result);
        break;
    case '-':
        printf("SUBTRACTION OF THE TWO NUMBERS.\n");
        result = num1 - num2;
        printf("The result of the subtraction is : %.2f\n",result);
        break;
    case '*':
        printf("MULTIPLICATION OF THE TWO NUMBERS.\n");
        result = num1 * num2;
        printf("The result of the multiplication is : %.2f\n",result);
        break;
    case '/':
        printf("DIVISON OF THE TWO NUMBERS.\n");
        result = num1 / num2;
        printf("The result of the division is : %.2f\n",result);
        break;
    }
printf("Result : %.2f %c %.2f = %.2f\n",num1,operator,num2,result);

return 0;
}