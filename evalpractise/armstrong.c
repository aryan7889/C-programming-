#include<stdio.h>
#include <math.h>
int main(){
    int num;
    int original,temp;
    int count;
    int sum,digit;
    printf("enter the number you want to check is the armstrong: ");
    scanf("%d",&num);

    original = num;
    temp = num;

    while(temp!=0){
        count++;
        temp/=10;
    }
    temp = num;
     while (temp!=0)
    {
        digit = temp % 10;
        sum = sum + pow(digit,count);
        temp/=10;
    }
    if (sum==original)
    {
        printf("the number is the armstrong number.");
    }else{
        printf("the number is not armstrong.");
    }   
return 0;
}