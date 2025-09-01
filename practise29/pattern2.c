#include <stdio.h>
int main(){
    int rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }
        for (int c = 1; c <= 2*i - 1; c++)
        {
            printf("%d",i);
        }
        printf("\n"); 
    }
    return 0;
}