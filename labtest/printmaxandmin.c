#include <stdio.h>
int main(){
    int n,temp;
    int min;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
            temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
    printf("Smallest: %d\n",arr[0]);
    printf("Largest %d",arr[n-1]);
    return 0;
    
}