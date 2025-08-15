#include <stdio.h>
int main(){
    int n = 0;
    int factorial = 1;

    printf("enter a of which you need to find the factorial: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }

    printf("Factorial of %d is %d.",n,factorial);
    return 0;
}