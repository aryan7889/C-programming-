#include <stdio.h>
int main(){
    int n,temp;
    printf("The size of the class is: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the marks of %d students");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the marks of the students are: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nthe top scored would be: ");
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
return 0;  
}