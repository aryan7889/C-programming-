#include <stdio.h>
int main(){
    int number = 0;
    printf("write the number till where you want to get the bunch of number.");
    scanf("%d",&number);
    printf("the numbers are:\n");
    for (int i = 0; i <= number; i++)
    {
        printf("%d\n",i);
    }
return 0;
}