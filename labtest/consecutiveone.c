#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the original array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int count =0;
    int maxcount = 0;
    // to check the max number of times the one would be coming
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count > maxcount){
                maxcount = count;
            }
        }else{
            count = 0;
        }
    }
    printf("the max times 1 is coming is %d.",maxcount);
    return 0;

}