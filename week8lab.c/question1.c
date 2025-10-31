#include <stdio.h>
int main(){
    int var = 20;
    int *ptr;
    ptr = &var;
    printf("The value of the var is = %d\n",var);
    printf("The adress value of the var is = %p\n",ptr);
    printf("The value of the var is = %d\n",*ptr);
return 0;
}