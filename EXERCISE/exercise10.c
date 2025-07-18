#include <stdio.h>
int main (){
    float a = 0;
    float b = 0;
    float c = 0;

    printf("Enter the sides of the triangle : ");
    scanf("%f,%f,%f",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        if (a == b && b == c)
        {
            printf("It is an equilateral triangle.");
        }
        if (a == b || b == c || c == a)
        {
            printf("It is an isosceles triangle.");
        } else {
            printf("It is a scalene triangle.");
        }
    }else
        {
            printf("Not a valid Triangle.");
        }
return 0;
    
}