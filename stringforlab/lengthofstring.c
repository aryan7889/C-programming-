#include <stdio.h>
int main(){
    char name[20];
    printf("Enter the your name: ");
    fgets(name,sizeof(name),stdin);
    printf("HELLOW %s\n",name);
    return 0;
}