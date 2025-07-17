#include <stdio.h>
int main (){
    int age = 0;
    printf("give the age of the person: ");
    scanf("%d",&age);

    if (age<=12)
    {
        printf("the person is a child");
    }else if (age<=19)
    {
        printf("the person is a teenager");
    } else if (age<=59)
    {
        printf("the person is adult.");
    }else{
        printf("the person is a adult.");
    }

return 0;

}