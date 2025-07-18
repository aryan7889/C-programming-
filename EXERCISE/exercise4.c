#include <stdio.h>
int main (){
    int score = 0;
    printf("Enter your score of the exam.");
    scanf("%d",&score);

    if (score >= 90 && score < 100)
    {
        printf("your grade is A\n");
    } else if (score >= 80 && score < 90)
    {
        printf ("your grade is B\n");
    } else if (score>=70&&score<80)
    {
        printf("your grade is C\n");
    }else if (score>=60&&score<70)
    {
        printf("your grade is D\n");
    }else if (score >= 0&&score<60)
    {
    printf("your grade is F\n");
    }else{
        printf("enter the score between limit.(0-100)\n");
    }
    
    return 0;
}