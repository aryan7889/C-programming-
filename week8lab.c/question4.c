#include <stdio.h>
int main(){
    int n;
    printf("ENter the size of the array");
    scanf("%d",&n);
    int arr[n];
    int k;
    int* ptr;
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    int temp;
    printf("enter the smallest number to find : ");
    scanf("%d",&k);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(ptr + j)>*(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    printf("the %d element is : %d",k,*(ptr+k-1));
    return 0;
}