#include <stdio.h>
int main(){
    char str[100];
    char *ptr;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    ptr = str;
    int length = 0;
    int sount = 0;
    while (*(ptr+length)!='\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        char ch = *(ptr+i);
        if (ch=='A'&&ch=='E'&&ch=='I'&&ch=='O'&&ch=='U'&&ch=='a'&&ch=='e'&&ch=='i'&&ch=='o'&&ch=='u')
        {
            sount++;
        }
    }
    
    printf("");
}