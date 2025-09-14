#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows in the row\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int element = 1;
        for(int space = 0;space < n-i-1;space++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("%4d",element);
            element = element*(i-j);
            element = element/(j+1);
        }
        printf("\n");
    }

return 0;
}
