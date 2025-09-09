// kadane algo:
/*In normal Kadane:

We only track sums (max_ending_here, max_so_far).

To print the subarray, we need to track:

start → possible starting index of the subarray.

end → ending index of the subarray.

s → temporary start index (when we decide to "start fresh").
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // printf("To get the max sum of the sub array: \n");
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    int start,end,s;
    for(int i = 0;i<n;i++){
        if (arr[i]>max_ending_here+arr[i])
        {
            max_ending_here = arr[i];
            s=i;
        }else{
            max_ending_here+=arr[i];
        }
        if (max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
            start = s;
            end = i;
        } 
    }
    printf("Max sub array sum is: %d\n",max_so_far);
    printf("su array is: ");
    for (int i = start; i < end; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}