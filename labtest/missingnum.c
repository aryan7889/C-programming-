#include <stdio.h>
int main(){
    int n,i;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers (1 to %d with one missing): ", n, n+1);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total=(n + 1) * (n + 2) / 2;
    int sumcoming = 0;
    for (int i = 0; i < n; i++)
    {
        sumcoming+=arr[i];
    }
    int missing = total - sumcoming;
    printf("the msiing number is : %d\n",missing);
    return 0;
}