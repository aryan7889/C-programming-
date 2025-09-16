#include <stdio.h>
int main(){
    int n,temp;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    int max;
    printf("Enter the elements of an array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        max = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>arr[max])
            {
                max = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    printf("sorted array desending: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}