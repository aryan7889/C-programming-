// to find the perfect numbers between 1 to 1000
#include <stdio.h>
int main(){
    printf("the perfect numbers between 1 to 1000.\n");
    for (int num = 1; num <= 1000; num++)
    {
        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
            
        }
        if (sum == num)
        {
            printf("%d ",num);  
        }
        
    }
   return 0; 
}