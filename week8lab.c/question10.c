#include <stdio.h>
int main(){
    char str[100];
    printf("enter the string: ");
    scanf("%c",str);
    int *start,*end;
    int length;
    start = str;
    while (*(str+length)!='\0')
    {
        length++;
    }
    start = str;
    end = str + length - 1;
    int pallindrome = 1;

    while (start < end)
    {
        if (start!=end)
        {
            pallindrome = 0;
            break;
        }
        start++;
        end--;
    }
    
// same
return 0;
}