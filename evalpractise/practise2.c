#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("%d",k);
        }
        for (int k = 2; k <=i; k++)
        {
            printf("%d",k);
        }
        printf("\n"); 
    }
    
    return 0;
}