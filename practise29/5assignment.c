#include <stdio.h>
int main(){
    int number,sum,digit1,digit2,count = 0;
    printf("enter the number: ");
    scanf("%d",&number);
    int temp = number;
    while (number!=0)
    {
        count++;
        number = number/10;
    }
    
    printf("number of digit in this number is: %d\n",count);
    digit1 = temp%10;
    printf("the last digit is: %d\n",digit1);
    
    while (temp>=10)
    {
        temp = temp/10;
    }
    digit2 = temp;
    printf("the first digit is: %d\n",digit2);
    sum = digit1 + digit2;
    printf("the sum is : %d\n",sum);
return 0; 
}