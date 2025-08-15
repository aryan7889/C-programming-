//calculate the sum of the first n natural numbers:
#include <stdio.h>
int main(){
    int n = 0;
    int sum = 0;

    printf("enter the number till where you want to get the sum:");
    scanf("%d",&n);
    printf("The n natural numbers are till %d are.\n",n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    
    printf("\nThe sum of %d natural numbers is: %d.",n,sum);
    return 0;
}