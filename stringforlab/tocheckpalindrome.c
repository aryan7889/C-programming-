#include <stdio.h>
int main(){
    char  str[200],word[50][50];
    int i=0,j=0,k=0,n=0;
    printf("enter the sentence: \n");
    fgets(str,sizeof(str),stdin);
    while (str[i]!='\0')
    {
        if (str[i]!=' '&&str[i]!='\0')
        {
            word[n][j++]=str[i];
        }else if (j>0)
        {
            word[n][j]='\0';
            n++;
            j=0;
        }
        i++;
    }
    if (j>0)
    {
        word[n][j]='\0';
        n++;
    }
    printf("to check the palindrome: ");
    for (int i = 0; i < n; i++)
    {
        int l = 0;
        while (word[i][l]!='\0')
        {
            l++;
        }
        int start = 0;
        int end = l-1;
        int flag = 1;
        while (start<end)
        {
            if (word[i][start]!=word[i][end])
            {
                flag = 0;
                break;
            }
            start++;
            end--;
        }
        if (flag && l>1)
        {
            printf("%s\n",word[i]);
        } 
    }
    
    return 0; 
    
}