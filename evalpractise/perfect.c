#include <stdio.h>
int main(){
    int num;
    int sum;
    printf("enter the number you want to check whether it is the perfect number or not");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("the number is the perfect number.");
    }
    else{
        printf("the number is not the perfect number.");
    }
return 0;
}