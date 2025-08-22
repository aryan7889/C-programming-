#include <stdio.h>
#include <string.h>
/*
Create an array with 5 different numbers
// Access and print the first and last elements
// Change the value of the middle element

// Your code here:

*/
int main(){
    
        printf("Exercise to create an array\n");
        int numbers[4]={10,20,30,40};
        int size = 4;

        printf("original array: ");
        for(int i = 0;i < size; i++){
            printf("%d ",numbers[i]);
        }
        printf("\n");
        printf("First element of the array: %d\n",numbers[0]);
        printf("Last element of the array: %d\n",numbers[size - 1]);

        numbers[2]=99;
        printf("After modifying middle: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ",numbers[i]);
        }
        printf("\n");
        
    return 0;
}
