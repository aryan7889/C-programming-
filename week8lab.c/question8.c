#include <stdio.h>
int main(){
    char str[100];
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    char* start,*end,temp;
    int lenght = 0;
    start = str;
    while (*(start + lenght)!='\0')
    {
        lenght++;
    }
    start = str;
    end = str + lenght -1;
    for (int i = 0; i < lenght/2; i++)
    {
        temp = *(start+i);
        *(start+i)=*(end-i);
        *(end-i)=temp;

    }
    printf("the string is:%s",str);
    
return 0;
}