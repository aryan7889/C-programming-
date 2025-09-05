#include <stdio.h>
int main(){
    int A[3][3],B[3][3],sub[3][3];
    printf("Enter first 3*3 matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter second 3*3 matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("subtraction of the two matrices are: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    

    return 0;    
}