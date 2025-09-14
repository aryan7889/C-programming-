#include <stdio.h>
// int main(){
//     int n,temp;
//     printf("enter the size of the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter %d elements in the array: ",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("ORIGINAL ARRAY IS: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//             temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//             }
//         }
//     }
//     printf("\nthe sorted array is: \n");
//     for(int i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// so in the bubble sort the element get swap to the next element if the 
// element ahead of it is bigger than the element itself.
// so we use the variable temp to stroe the element of the arr[0]
// and make sure it get swapped as it is bigger then the element after it 
// and after swapping would be stored in the next value
int main(){
    int n,temp;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements in the array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the original array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nTHE SORTED ARRAY IS : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}