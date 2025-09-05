#include <stdio.h>
int main(){
    int arr3[]={64, 34, 25, 12, 22, 11, 90};
    int size1 = 7;
    int swapped = 0;
    int comparison = 0;
    int swaps = 0;
    printf("Original array is: \n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    for (int i = 0; i < size1 - 1; i++)
    {
        swapped = 0;
        printf("pass : %d\n",i+1);
        for (int j = 0; j < size1 - i - 1; j++)
        {
            comparison++;
            printf("comparing %d from %d: \n",arr3[j],arr3[j+1]);
            if (arr3[j]>arr3[j+1])
            {
                int temp = arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
                swaps++;
                swapped = 1;
                printf("swapped\n");
            }else{
                printf("no swap needed.\n");
            }
        
        }
            printf("after pass %d: ",i+1);
            for (int k = 0; k < size1; k++)
            {
                printf("%d ",arr3[k]);
            }
            printf("\n");
            if(!swapped) {
            printf("  Array is sorted! Early termination.\n");
            break;
            }
            printf("\n");
    }
    printf("Final sorted array: ");
for(int i = 0; i < size1; i++) {
    printf("%d ", arr3[i]);
}
    printf("\nTotal comparisons: %d\n", comparison);
printf("Total swaps: %d\n\n", swaps);
return 0;
}