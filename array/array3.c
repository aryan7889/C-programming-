#include <stdio.h>
#include <string.h>
int main(){
    int nums[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = 10;

    printf("All numbers: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    printf("even numbers only: ");
    for (int i = 0; i < size; i++)
    {
        if (nums[i]%2 ==0)
        {
            printf("%d ",nums[i]);
        }
        
    }
    
    return 0;
}