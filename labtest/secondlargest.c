#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the eleemts in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = -273943629;
    int secondlargest = -273943629;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            arr[i]=largest;
            secondlargest = largest;
        }else if (arr[i]>secondlargest && arr[i]<largest)
        {
            secondlargest = arr[i];
        } 
    }
    if (secondlargest == -273943629)
    {
        printf("No second largest element found\n");
    }else{
        printf("Second largest element: %d\n", secondlargest);
    }
    return 0;
    

}