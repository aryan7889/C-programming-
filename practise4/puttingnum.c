#include <stdio.h>
int main(){
    int arr1[10]={10,20,30,40,50};
    int size1 =5;
    int element = 25;
    int position = 2;
    printf("the original array is \n");
    for (int i = 0; i < size1; i++)
    {
        printf("%2d ",arr1[i]);
    }
    printf("\n");
    printf("inserting %d at the %d position\n",element,position);
    for (int i = size1; i> position; i--)
    {
        arr1[i]=arr1[i-1];
        printf("Moving %d from position %d to %d\n",arr1[i],i-1,i);
    }
    
    arr1[position]= element;
    size1++;
    printf("Array after adding the element: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
}