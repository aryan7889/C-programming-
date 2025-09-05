#include <stdio.h>
int main(){
    int A[3][3];
    int trans[3][3];
    printf("enter the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i]=A[i][j];
        }
    }
    printf("Transpose of a matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",trans[i][j]);
        }
       printf("\n"); 
    }
    
   return 0; 
}