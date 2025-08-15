#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int start , n, difference;
    int sum = 0;

    printf("Enter the starting number of the series: ");
    scanf("%d",&start);
    printf("Enter the number of terms in the series.");
    scanf("%d",&n);
    printf("Enter the differnece of the A.P.");
    scanf("%d",&difference);

    printf("The airthmetic progression would be.\n");
    for (int i = 0; i < n; i++)
    {
        int term = start + i*difference;
        printf("%d \n",term);
        sum = (n*(2*start + (n - 1)*difference))/2;
    }
    printf("\nThe sum of the series is: %d\n",sum);
    return 0;
}