#include <stdio.h>
int main(){
    int arr5[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size5 = 8;
    int k = 3; 
    printf("original array: ");
    for (int i = 0; i < size5; i++)
    {
        printf("%d ",arr5[i]);
    }
    int temp[k];
    printf("\nshifting left by %d position.\n",k);
    for (int i = 0; i < k; i++)
    {
        temp [i] = arr5 [i];
        printf("%d ",temp[i]);
    }
    printf("\n");
    printf("printing remaining elements to the left.\n");
    for (int i = 0; i < size5 - k; i++)
    {
        printf("  Moving %d from position %d to position %d\n", arr5[i + k], i + k, i);
        arr5[i]=arr5[i+k];
    }
    printf("placing stored\n");
    for (int i = 0; i < k; i++)
    {
        printf("Placing %d at position %d\n", temp[i], size5 - k + i);
        arr5[size5-k+i]=temp[i];
    }
    printf("Array after left shift: ");
for(int i = 0; i < size5; i++) {
    printf("%d ", arr5[i]);
}
    
}