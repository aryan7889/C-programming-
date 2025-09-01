#include <stdio.h>
int main(){
    int rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    int space = rows;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2*space - 2*(i-1) - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 2; i <= rows; i++)
    {
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        for (int k = 1; k <= 2*space - 2*(i-1) - 1; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}