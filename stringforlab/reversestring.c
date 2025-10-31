#include <stdio.h>
int main(){
    char name[20];
    printf("enter the string: ");
    fgets(name,sizeof(name),stdin);
    int len=0;
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0';
            break;
        }
        len++;
    }
    for (int i = len-1; i >=0; i--)
    {
        printf("%c",name[i]);
    }
    
    return 0;
}