#include <stdio.h>
int main(){
    int matrix[4][4]={
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
    };
    int rows = 4;
    int column = 4;
    printf("matrix is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("calculate the sum of the rows:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("row : %d\n",i);
        int rowsum = 0;
        for (int j = 0; j < column; j++)
        {
            printf("%d",matrix[i][j]);
            rowsum += matrix[i][j];
            if (j<column-1)
            {
                printf("+");
            }
            
        }
        printf("\n");
        printf("the sum is %d\n",rowsum);
    }
    printf("calculate the sum of the column: \n");
    for(int i = 0;i<column;i++){
        printf("column : %d\n",i);
        int columnsum = 0;
        for (int j = 0; j < rows; j++)
        {
            printf("%d",matrix[j][i]);
            columnsum += matrix[j][i];
            if (j<rows-1)
            {
                printf("+");
            }
        }
        printf("\n");
        printf("the sum of the column is: %d\n",columnsum);  
    }
printf("\n");
return 0;

}