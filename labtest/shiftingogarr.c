#include <stdio.h>
int main(){
    int n;
    int shift;
    printf("Enter the size of the aarray: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the shifting of the array: ");
    scanf("%d",&shift);
    shift = shift%n;
    printf("The original Array is : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int temp[shift];
    for(int i=0;i<shift;i++){
        temp[i] = arr[i];
    }
    for(int i=shift;i<n;i++){
        arr[i-shift]=arr[i];
    }
    for (int i = 0; i < shift; i++)
    {
        arr[n-shift+i]=temp[i];
    }
    printf("\nArray after shifting is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}