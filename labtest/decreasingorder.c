#include <stdio.h>
int main(){
    int n,temp;
    printf("enter the sixe of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted array (descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}