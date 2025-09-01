#include <stdio.h>
int main(){
    int number;
    printf("enter the number of which you want prime factors of:");
    scanf("%d",&number);
    int temp = number;
    int i = 2;
    printf("the prime factor of %d are: ",number);
while (temp>1)
{
    if (temp%i==0)
    {
        printf("%d,",i);
        temp = temp/i;
    }else{
    i++;
    }
}

    return 0;
}