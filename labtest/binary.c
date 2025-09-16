#include <stdio.h>
int main(){
   int n,temp;
   int search;
   int low,high,mid;
   int found;
   printf("enter the size of an array: ");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements in the array: ");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("the original array is:");
   for (int i = 0; i < n; i++)
   {
    printf("%d ",arr[i]); 
   }
//    sorting of the array:
   for(int i=0;i<n-1;i++){
    for(int j=i;j<n-i-1;j++){
        if (arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
   printf("enter the elements to check: ");
   scanf("%d",&search);
   low=0;
   high=n-1;
   while (low<=high)
   {
    mid = (low+high)/2;
    if(arr[mid]==search){
        found =1;
        break;
    }else if (arr[mid]<search)
    {
        low = mid +1;
    }else{
        high = mid -1;
    }
   }
   if(found){
    printf("element %d found at position %d\n",search,mid+1);
   }else{
    printf("Element not found\n");
   }
   return 0;
}