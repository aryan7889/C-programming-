#include <stdio.h>
int main(){
    int n,temp;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("To remove the duplicate element: ");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int newsize = 0;
    int unique[n];
    for(int i=0;i<n;i++){
        if (i==0||arr[i]!=arr[i+1])
        {
            unique[newsize]=arr[i];
            newsize++;
        }
    }
    printf("\nArray after the removing duplicates: ");
    for(int i=0;i<newsize;i++){
        printf("%d ",unique[i]);
    }
    return 0;
}