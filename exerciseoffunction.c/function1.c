// function by the bro code:
#include <stdio.h>
#include <string.h>
void happybirthday(char name[],int age){
    printf("Happy birthday.\n");
    printf("Happy birthday to %s.\n",name);
    printf("Now %s is %d old.\n",name,age);
}
int main(){
    char name[50]="";
    int age = 0;
    printf("Enter your name.");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    printf("Enter your age.");
    scanf("%d",&age);
    happybirthday(name,age);
    return 0;
}