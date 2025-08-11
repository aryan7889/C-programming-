#include <stdio.h>
void happybirthday(char name[],int age){
    printf("Happy birthday to you.\n");
    printf("Happy birthday to you.\n");
    printf("Happy birthday to you.\n");
    printf("Happy birthday to you %s.\n",name);
    printf("Happy birthday to you.\n");
    printf("%s is %d years old now.\n",name,age);
    printf("Happy birthday to you.\n");
}
int main (){
    // so the programming is there for making our work easy
    // and it make sure that we dine use the repetitive code
    // so function is the way to go to execute it.
    char name[]= "";
    printf("enter the name of the person");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    int age = 0;
    scanf("%d",age);
    happybirthday(name,age);
// so when we are calling the function we need to make sure that 
// we are passing the argument in the function and if we try to
// not pass the argument then then it will show the error stating 
// very arguments to read.
// ////////IMPORATNAT////////
// what happen when we dont write the argument in the same order that
// we are willing to use the parameter in the form of so we are first
// calling the string in the parameter then the integer so we need
// to make sure that arguments are in the smae order.

    return 0;
}