#include <stdio.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int k=0;
    printf("enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // traverse throught the array:
    for (int i = 0; i < n; i++)
    {
        int isduplicate = 1;
        for (int j = 0; j < k; j++)
        {
            if (arr[i]==arr[j])
            {
                isduplicate = 1;
                break;
            }

        }
        if (!isduplicate)
            {
                arr2[k]=arr[i];
                k++;
            } 
    }
    printf("the uniques elements are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;   
    
}