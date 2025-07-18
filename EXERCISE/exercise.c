#include <stdio.h>
int main (){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0){
        printf("%d number is positive",num);
    }else if (num<0){
        printf("%d number is negative",num);
    }else{
        printf("%d number is zero",num);
    }
    

    return 0;
}