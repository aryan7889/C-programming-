#include <stdio.h>
int main (){
    int num = 0;
    printf("Write the the number: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thrusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Write the number between (1-7).\n");
    }

return 0;

}