// reverse the number :
#include <stdio.h>
int main(){
    int num;
    int remainder;
    int reversed = 0;
    printf("Enter the number which you want to reverse.");
    scanf("%d",&num);

    while(num!=0){
        remainder = num%10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("the reversed number would be: %d",reversed);
    return 0;
}