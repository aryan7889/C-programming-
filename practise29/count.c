#include <stdio.h>
int main(){
    int count;
    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    int temp = num;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("the number of digits in the number %d are %d",temp,count);
    return 0;
}