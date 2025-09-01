#include <stdio.h>
int main(){
    int startingnum,difference,n,sum;
    printf("The ap would be starting from the number: \n");
    scanf("%d",&startingnum);
    printf("The differnce of the ap is: \n");
    scanf("%d",&difference);
    printf("Number of the terms in the ap are: \n");
    scanf("%d",&n);
    int endnumber = (startingnum + (n-1)*difference);
    for (int noofterm = 1;noofterm<=n ; noofterm++)
    {
        int numbers = (startingnum + (noofterm - 1)*difference);
        printf("%d ",numbers);
    }

    sum = (n*(2*startingnum + (n-1)*difference))/2;
    printf("\nthe sum of the ap is: %d",sum);
    return 0;
}