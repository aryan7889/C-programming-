#include <stdio.h>
int main(){
    int startingnum , finalnum;
    
    printf("enter the starting number: ");
    scanf("%d",&startingnum);
    printf("enter the ending number: \n");
    scanf("%d",&finalnum);
    if (startingnum <= 0 || finalnum <= 0)
    {
        printf("the number is not prime.");
    }else{
        for (int i = (startingnum + 1); i <= finalnum; i++)
        {
            int isprime = 1;
            for (int j = 2; j < i ; j++)
            {
                if (i%j == 0)
                {
                    isprime = 0;
                    break;
                }
                
            }
            if (isprime == 1)
            {
                printf("%d the number is prime.\n",i);
            }
            else{
                printf("%d the number is not prime.\n",i);
            }
            
        }
        
    }

    return 0;
}