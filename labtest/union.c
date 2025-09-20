#include <stdio.h>
int main(){
    int n1,n2;
    printf("enter the size of the array: ");
    scanf("%d",&n1);
    int arr[n1];
    printf("enter the elements in the array: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sizze of the second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("ente rthe elements in the second array: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int unionarray[n1+n2];
    int size = 0;

    for(int i=0;i<n1;i++){
        unionarray[size++]=arr[i];
    }

    for(int i=0;i<n2;i++){
        int found=0;
        for(int j=0;j<size;j++){
            if(arr2[i]==unionarray[j]){
                found=1;
                break;
            }
        }
        if (!found)
        {
            unionarray[size++]=arr2[i];
        }
    }
    printf("The union array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",unionarray[i]);
    }
    return 0;
}