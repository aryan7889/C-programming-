#include <stdio.h>
int main (){
    int month = 0;
    printf("Write the number of the month: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 Days in the month.\n");
        break;
    case 4: case 6: case 9: case 11:
        printf("30 Days in the month.\n");
    break;
    default:
        printf("Invalid number type between (1-12).\n");
    }

switch (month)
{
case 1:
    printf("January\n");
    break;

default:
    printf("testing something.\n");
}
return 0;

}