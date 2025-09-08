#include <stdio.h>
int main(){
    //find the remove the duplicates from the array:
    //1.take the input 
    //2.print the array
    //3.remove the same element
    //4.new array after rmoving the element
    int n;
    printf("the size of the array: \n");
    scanf("%d",&n);
    printf("enter the elements in the array:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the element of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("\nFound duplicate %d at %d and  %d",arr[i],i,j);
                for (int k = j; k < n; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
            
        }
        
    }
    printf("\nArray after removing duplicates: ");
for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
return 0;
}