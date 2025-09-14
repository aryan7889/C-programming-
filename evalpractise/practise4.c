#include<stdio.h>
int main(){
    int num;
    int temp;
    int digit;
    int sum1,sum2;
    printf("enter the number: ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        digit = temp%10;
        sum1 = sum1 + digit;
        temp/=10;
    }
    printf("%d",sum1);
    temp = sum1;
    while(temp!=0){
        digit = temp%10;
        sum2 = sum2 + digit;
        temp/=10;
    }
    printf("\n%d",sum2);
    return 0;
}