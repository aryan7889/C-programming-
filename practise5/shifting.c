#include <stdio.h>
int main(){
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size of the arrat is : %d",size);
    printf("\nenter the number which you want to shif to the left: \n");
    scanf("%d",&n);
    printf("the original array: \n");
    for (int i = 0; i < size; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\nstoring the array in the temp array: \n");
    int temp[9];
    for(int i = 0;i<n;i++){
        temp[i]=arr[i];
        printf("%d ",temp[i]);
    }
    printf("\n");
    printf("shifting the array: \n");
    for (int i = 0; i < size - n; i++)
    {
        printf("moving %d from %d to %d\n",arr[i+n],i+n,i);
        arr[i]=arr[i+n];
    }
    printf("storing the elements at the end: \n");
    for (int i = 0; i < n; i++)
    {
        printf("placing %d to position %d\n",temp[i],size-n+i);
        arr[size - n + i]=temp[i];
    }
    printf("the left shift array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

    
}