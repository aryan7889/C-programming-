#include <stdio.h>
int main(){
    int row,column;
    printf("enter the number of rows: \n");
    scanf("%d",&row);
    printf("enter the number of column: ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("enter the elements of the matrix: \n");
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("enter the element at %d,%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<column;j++){
            printf("%2d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("the diagonal elements : \n");
    int diagonalsum = 0;
    for (int i = 0; i < row; i++)
    {
        printf("%2d ",matrix[i][i]);
        diagonalsum += matrix[i][i];
    }
    printf("\nthe sum of the digonal elements is: %d\n",diagonalsum);
    printf("the secondaary diagonal would be : \n");
    int secondarysum = 0;
    for (int i = 0; i < row; i++)
    {
        printf("%d ",matrix[i][row - 1 - i]);
        secondarysum += matrix[i][row - 1 - i];
    }
    printf("\nSecondary Diagonal Sum: %d\n", secondarysum);

    
    
return 0;
}