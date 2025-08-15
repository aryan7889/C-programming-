//the method which will help you to count the digit in the number.
#include <stdio.h>
int main(){
    float num = 0;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    while (num != 0 )
    {
        num = num/10;
        count++;
    }
    printf("Number of digits: %d\n",count);
    return 0;
}