#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int i = 0;
    int count = 0;
    while (str[i]!='\0')
    {
        if (str[i]=='\n')
        {
            str[i]='\0';
        }else{
            i++;
        } 
    }
    int actual = 0;
    while (str[actual]!='\0')
    {
        char ch = str[actual];
        if (ch =='a'||ch =='e'||ch =='i'||ch=='o'||ch=='u'||
        ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
        {
            count++;
        }
        actual++;
    }
    printf("Vowels: %d\n",count);
    return 0;
}