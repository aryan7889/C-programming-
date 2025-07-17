#include <stdio.h>
int main(){
    int num = 0;
    printf("type a number: ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("%d is even.",num);
    }else {
        printf("%d is the odd number.",num);
    }

    return 0;
    
}