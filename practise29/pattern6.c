#include <stdio.h>
// int main(){
//     int rows;
//     printf("enter the number of rows in the upper half: ");
//     scanf("%d",&rows);
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int k = 1; k <= 2*rows - 2*i; k++)
    //     {
    //         printf(" ");
    //     }
    //     for(int l = 1;l<=i;l++){
    //         printf("*");
    //     }
    // printf("\n"); 
    // }
    // for (int l = rows -1; l > 0; l--)
    // {
    //     for (int i = 1; i <= l; i++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 1; j<=2*rows-2*l; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= l; k++)
    //     {
    //         printf("*");
    //     }  
    //     printf("\n");   
    // }
    // return 0;
// }
int main(){
    int rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 2*rows - 2*i; k>0; k--)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        
       printf("\n"); 
    }
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j<= i; j++)
        {
            printf("*");
        }for (int k = 1; k <= 2*rows-2*i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i ; l++)
        {
            printf("*");
        }
        
       printf("\n"); 
    }
    
    return 0;
}