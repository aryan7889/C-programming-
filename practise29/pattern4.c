#include <stdio.h>
int main(){
    int rows;
    printf("enter the rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
        for (int l = rows - 1; l > 0; l--)
        {
            for (int m = 1; m <= rows - l; m++)
            {
                printf(" ");
            }
            for (int n = 1; n <= 2*l -1; n++)
            {
                printf("*");
            }
            printf("\n");
        }
  return 0;  
}