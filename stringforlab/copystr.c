#include <stdio.h>
int main(){
    char name[20]="HEllo";
    char str[20]="World";
    int i = 0;
    int j = 0;
    while (name[i]!='\0')
    {
        i++;
    }
    printf("%d \n",i);
    
    while (str[j]!='\0')
    {
        name[i]=str[j];
        i++;
        j++;
    }
    name[i]='\0';
    printf("%s",name);
    return 0;
}