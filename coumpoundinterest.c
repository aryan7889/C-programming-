#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timescoumpunded = 0;
    double total = 0.0;

    printf("Compond Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf",&principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("enter the # of years (t): ");
    scanf("%d",&years);


    printf("enter # of times compunded per year (n): ");
    scanf("%d", &timescoumpunded);

    total = principal * pow(1 + rate/timescoumpunded, timescoumpunded);
    printf("After %d years, the total will be $%.2lf",years,total);

    return 0;
}