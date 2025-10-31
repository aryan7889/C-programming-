#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr;
    int sum = 0;
    printf("enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("the sum of the array is %d",sum);
    return 0;
}