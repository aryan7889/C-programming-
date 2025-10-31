#include <stdio.h>
int main(){
    int n;
    int highest = 0;
    int centuries = 0;
    int temp = 0;
    printf("enter the the number of batter batted.");
    scanf("%d",&n);
    int score[n];
    printf("enter the score of each player: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&score[i]);
    }
    highest = score[0];
    for (int i = 0; i < n; i++)
    {
        if (score[i]>highest)
        {
            highest = score[i];
        }
        if (score[i]>=100)
        {
            centuries++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (score[i]>score[j])
            {
                temp = score[i];
                score[i]=score[j];
                score[j]=temp;
            } 
        }
    }
    printf("\nHighest score is: %d",highest);
    printf("\nthe number of centuries in the match are: %d",centuries);
    printf("Sorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",score[i]);
    }
    printf("\nSecond lowest score in the match is: %d",score[8]);
    printf("Scond highest score int he match is: %d");
    return 0;

}