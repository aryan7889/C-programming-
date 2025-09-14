#include <stdio.h>
int main(){
    int num;
    int isprime = 1;
    printf("enter the number you want to check: ");
    scanf("%d",&num);
    if (num<=0)
    {
        printf("the number is not prime");
    }else if (num == 2)
    {
        printf("the number is not prime.");
    }else {
        for (int i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                isprime = 0;
                break;
            }
        }
        
    }
    if (!isprime)
    {
        printf("The number is not prime");
        }else{
        printf("the number is prime");
    }
    
    
    
    return 0;
    
}