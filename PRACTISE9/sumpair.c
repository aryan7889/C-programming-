#include <stdio.h>
int main(){
    int n;
    int i,j;
    int currentsum;
    printf("enter the size of the array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sum of which you want the pair of:\n");
    scanf("%d",&currentsum);
    printf("Enter the array: \n");
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("To get the pair: \n");
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++){
            if (arr[i]+arr[j]==currentsum)
            {
                printf("Pair found for the following sum (%d,%d).\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    if (!found)
    {
        printf("No pair found for the following sum.\n");
    }
    
    return 0;

}