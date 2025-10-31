#include <stdio.h>
int main(){
    char str[200],word[50][50];
    int i=0,k=0,j=0,n=0;
    printf("Enter the sentence:\n");
    fgets(str,sizeof(str),stdin);
    // to convert the string in to the the word:
    while (str[i]!='\0')
    {
        if (str[i]!=' '&&str[i]!='\n')
        {
            word[n][j++]=str[i];
        }else if (j>0)
        {
            word[n][j]='\0';
            n++;
            j=0;
        }
    }
    if (j>0)
    {
        word[n][j]='\0';
        n++;
    }
    printf("the reversed sentence is : ");
    for (int i = n-1; i >=0; i--)
    {
        printf("%s ",word[i]);
    }
    
return 0;  
    
}