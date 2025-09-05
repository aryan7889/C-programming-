#include <stdio.h>
int main(){
    int matrix[3][3];
    int matrix2[3][3];
    int sum[3][3];
    printf("enter the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d] 1: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("enter the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d] 2: ", i, j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]=matrix2[i][j]+matrix[i][j];
        } 
    }
    printf("sum of the arrays are: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
 return 0;   
}