#include <stdio.h>
int main(){
    int rows;
    int column;
    printf("enter the rows: ");
    scanf("%d",&rows);
    printf("enter the column : ");
    scanf("%d",&column);
    int arr[rows][column];
    printf("Enter the elements inthe array: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    int *ptr;
    ptr = &arr[0][0];
    int sum = 0;
    for (int i = 0; i < rows*column; i++)
    {
        sum+=*(ptr+i);
    }
    
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;

}