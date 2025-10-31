#include <stdio.h>
int main(){
    char str[100];
    printf("ENTER STRING: ");
    fgets(str,sizeof(str),stdin);
    int len =0;
    while (str[len]!='\0')
    {
        if (str[len]!='\n')
        {
            str[len]!='\0';
            break;
        }else{
            len++;
        }
    }
    int find = 1;
    for (int i = 0; i < len/2; i++)
    {
        if (str[i]=str[len-i-1])
        {
            find = 0;
            break;
        }
    }
    if (find)
    {
        printf("pallindrome.");
    }else{
        printf("not a palindrome.");
    }
    return 0;
}