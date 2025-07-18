#include <stdio.h>
int main (){
    int temperature = 0;
    printf("what really the temperature is in [C]: ");
    scanf("%d",&temperature);

    if (temperature<0)
    {
        printf("Outside it is freezing!");
    }else if (temperature>=0 && temperature<=10)
    {
        printf("it is cold outside");
    }else if (temperature>=11 && temperature<=25)
    {
        printf("it is moderate outside.");
    }else if (temperature>=26 && temperature <= 35)
    {
        printf("it is warm outside.");
    }else
    {
        printf("it is quite hot outside.");
    }

    
return 0;
    
}