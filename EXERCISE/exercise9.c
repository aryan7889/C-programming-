#include <stdio.h>
int main (){
    int choice = 0;
    float length = 0;
    float radius = 0;
    float breadth = 0;
    float base = 0;
    float height = 0;
    float result = 0;

    printf("/////Area Calculator of some figures./////\n");
    printf("1.Area of the Circle.\n");
    printf("2.Area of the Rectangle.\n");
    printf("3.Area of the triangle.\n");
    printf("EXIT\n");
    printf("Enter your choice:");
    scanf(" %d",&choice);

    switch (choice)
    {
    case 1:
        printf("Area of the Circle\n");
        printf("Radius of the circle is: \n");
        scanf("%f",&radius);
        result = 3.14*radius*radius;
        printf("The area of the circle is %.2f.\n",result);
    break;
    case 2:
        printf("The area of the Rectagle\n");
        printf("Length of the side of the rectangle is: ");
        scanf("%f",&length);
        printf("Breadth of the side of the rectangle is: ");
        scanf("%f",&breadth);
        result = length * breadth;
        printf("The area of the rectangle is %.2f\n",result);
    break;
    case 3:
        printf("The area of the Triangle\n");
        printf("Height of the triangle is: \n");
        scanf("%f",&height);
        printf("Base of the triangle is: \n");
        scanf("%f",&base);
        result = 0.5 * base * height;
        printf("The are of the triangle is %.2f\n",result);
    break;
    case 4:
        printf("EXIT\n");
    break;
    default:
        printf("Invalid Choice Choosen!!!\n");
        
    }
return 0;
}