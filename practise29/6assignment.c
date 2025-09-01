#include <stdio.h>
int main(){
    int month,year,startday;
    int days = 0;
    printf("Enter the month of which you want the the calendar of: \n");
    scanf("%d",&month);
    printf("Enter the year: \n");
    scanf("%d",&year);
    printf("enter the start day of the month (0=Sunday, 1=Monday,...,6=Saturday): \n");
    scanf("%d",&startday);
    if (month == 2)
    {
        if ((year%400 == 0) || (year % 100 != 0 && year % 4 == 0))
        {
            days  = 29;
        }else{
            days = 28;
        } 
    }else if (month == 4 || month == 6|| month == 9|| month == 11)
    {
        days = 30;
    }else{
        days =31;
    }
    printf("\n Sun Mon Tue Wed Thr Fri Sat \n");
    for (int i = 0; i < startday; i++)
    {
        printf("    ");
    }
    for (int j = 1; j < days; j++)
    {
        printf("%4d",j);
        if ((j+startday)%7==0)
        {
            printf("\n");
        }
    }
    printf("\n");
    

return 0;
}