#include <stdio.h>
int main(){
    int row;
    printf("the number of rows: ");
    scanf("%d",&row);
    int a;
    for (int i = 1; i <= row; i++)
    {
        int num = row*i;
        int prime;
        for (int j = 1; j <= i; j++)
        {
            for (int a = 2; a<row*i; a++)
            {
                if (num%a==0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime)
            {
                printf("%d",num);
            }
            num--;
            
        }
        printf("\n");
    }
    return 0;
}