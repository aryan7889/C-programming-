#include <stdio.h>
int main(){
    int rows;
    int n =1;
    printf("enter the number of row ");
    scanf("%d",&rows);
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d ",n);
            n++;
        }
       printf("\n"); 
    }
return 0;  
}