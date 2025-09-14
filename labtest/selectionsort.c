#include <stdio.h>
int main(){
    int n,temp;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int minindex;
    int arr[n];
    printf("ente the element in the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nthe original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex = j;
            }
            temp = arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        }
        
    }
    printf("\nSorted array (ascending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;

}