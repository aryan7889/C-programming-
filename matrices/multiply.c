#include <stdio.h>
int main(){
    int A[3][3];
    int B[3][3];
    int C[3][3];
    printf("enter the array A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&A[3][3]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;j < 3; j++)
        {
            C[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j]+= A[i][j]*B[i][j];
            }
             
        }
    }
    printf("multiplication of two matrices is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}