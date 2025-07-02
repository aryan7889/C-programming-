#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 25;
    printf("my age is %d much years old\n",age);

    // another good exmaple of the int could be the quantity
    int quantity = 2;
    printf("hey i have ordered %d x items from the store.\n",quantity);

    //now the new example of the variable is float:
    float gpa = 3.5;
    float temperature = 5.8;
    printf("my gpa is %.2f ", gpa);
    printf("the temperature today is %.1fC\n",temperature);

    double pi = 3.1457896485214364;
    printf("hey the value of the pi is %lf\n",pi);
    double e = 2.745896123548;
    printf("the value of the euler number is %.7lf\n",e);


    //another datatyoe is the char which is character 
    char grade = 'A';
    printf("my grade is %c\n", grade);
    char currency = '$';
    printf("the currency is %c\n",currency);

    //so if we have ot introduce the bolean in the code then we have to include 
    //the library
    bool ioOnline = false;
    if (ioOnline)
    {
        printf("is online");
    }
    else
    {
       printf("you are offline");
    }
    
    return 0;
}