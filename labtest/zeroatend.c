#include <stdio.h>
int main(){
    int n;
    printf("Enter the szze of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nTHE ORIGINAL ARRAY IS: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int temp[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=temp[i];
    }
    for(int i=count;i<n;i++){
        arr[i]=0;
    }
    printf("\nthe modify array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}