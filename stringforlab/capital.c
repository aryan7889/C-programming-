#include <stdio.h>
int main(){
    char str[500];
    int i = 0;
    printf("enter the paragraph:\n");
    fgets(str,sizeof(str),stdin);
    if (str[0] >= 'a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    while (str[i]!='\0')
    {
        if (str[i]==' '||str[i]=='.'||str[i]=='?'||str[i]=='!'||str[i]=='"')
        {
            int j = i+1;
        while (str[j]==' '||str[j]=='\n')
        {
            j++;
        }
        if (str[j]>='a'&&str[j]<='z')
        {
            str[j]=str[j]-32;
        }
        }
        i++;
    }
    printf("\nCorrected paragraph is : \n%s",str);
    return 0;
    
}