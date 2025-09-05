#include <stdio.h>
int main(){
    printf("=== PROBLEM 4: SADDLE POINT IN MATRIX ===\n");

int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
int rows = 3, cols = 3;

printf("Matrix:\n");
for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
int saddlepoint = 0;
int isrowmin = 1, iscolmax = 1;

printf("checking fo rthe saddle point \n");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
    int current = matrix[i][j];
    printf("Checking element %d at position (%d,%d):\n", current, i, j);

    printf("  Row %d elements: ", i);
    for (int k = 0; k < cols; k++)
    {
        printf("%d ",matrix[i][k]);
        if(matrix[i][k] < current) {
        isrowmin = 0;
        }
    }
    printf("-> %d is %s in row\n", current, isrowmin ? "minimum" : "not minimum");
    
    if (isrowmin)
    {
        printf("  Column %d elements: ", j);
            for(int k = 0; k < rows; k++) {
                printf("%d ", matrix[k][j]);
                if(matrix[k][j] > current) {
                    iscolmax = 0;
                }
                }
printf("-> %d is %s in column\n", current, iscolmax ? "maximum" : "not maximum");
    }
    
}
if(isRowMin && isColMax) {
            printf("  *** SADDLE POINT FOUND: %d at position (%d,%d) ***\n", current, i, j);
            saddleFound = 1;
        }
        printf("\n");
    }
}
}