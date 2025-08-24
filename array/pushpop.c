#include <stdio.h>
#include <string.h>
int main(){
    printf("exercise to know the uses of the push pop\n");
    int arr[20];
    int size = 0;
    printf("starting array size: %d\n",size);

    arr[size++] = 1;
    arr[size++] = 2;
    arr[size++] = 3;
    arr[size++] = 4;

    printf("after pushing:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nafter pushing the size is: %d\n",size);

    // add to begginig:
    for (int i = size; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0]=0;
    size++;
    printf("after unshifting the zero: \n");
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
printf("\nthe size of the array is %d\n",size);

int popped = arr[--size];
printf("after popping : \n");
for (int i = 0;  i<size; i++)
{
    printf("%d ",arr[i]);
}
printf("\nremoved %d from the array the size is: %d \n",popped,size);

    int shifted = arr[0];
    for (int i = 0; i< size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    printf("after shifting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nremoved: %d and the size is: %d",shifted,size);
    
    
    
return 0;
}