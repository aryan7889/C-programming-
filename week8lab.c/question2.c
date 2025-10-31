#include <stdio.h>
int main(){
    char  str[100];
    char *ptr;
    int lenght;
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    ptr = str;
    while (*ptr!='\0')
    {
        lenght ++;
        ptr++;
    }
    printf("The length of the string is : %d",lenght);
    return 0;
}