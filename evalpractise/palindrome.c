#include <stdio.h>
int main(){
    int num,original,temp;
    int digit,reverse;
    printf("enter the number which you want to check: ");
    scanf("%d",&num);
    original = num;
    temp = num;
    while(temp!=0){
        digit = temp%10;
        reverse = reverse*10 + digit;
        temp/=10;
    }
    printf("%d\n",reverse);
    if (original==reverse)
    {
        printf("the given number is the palindrome number.");
    }else{
        printf("the given number is not a palindrome number.");
    }
return 0;
}