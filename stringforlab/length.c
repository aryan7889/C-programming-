#include <stdio.h>
int main(){
    char name[20] = "Hellow";
    int i =0;
    while (name[i]!='\0')
    {
        printf("%c ",name[i]);
        i++;
    }
    printf("\n%d",i);
    return 0;

}