#include <stdio.h>
int main(){
    int rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        int ch = 'A';
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
  return 0;  
}