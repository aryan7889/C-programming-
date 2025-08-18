#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerchoice();
int getuserchoice();
void checkwinner(int getuserchoice,int getcomputerchoice);
int main(){

    srand(time(NULL));
    printf("ROCK PAPER SCISSORS \n");
    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();

    switch (userchoice)
    {
    case 1:
        printf("You choose ROCK.\n");
        break;
    case 2:
        printf("You choose PAPER.\n");
        break;
    case 3:
        printf("YOu choose SCISSORS.\n");
        break;
    default:
        printf("YOu the nuber between 1-3\n");
        break;
    }
    switch (computerchoice)
    {
    case 1:
        printf("Computer choose ROCK.\n");
        break;
    case 2:
        printf("Computer choose PAPER.\n");
        break;
    case 3:
        printf("Computer choose SCISSORS.\n");
        break;
    }

    return 0;
}
int getcomputerchoice(){
    return (rand()%3) + 1;
}
int getuserchoice(){
    int choice = 0;
    do
    {
        printf("Choose an operator\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
    } while (choice < 1|| choice > 3);
    
    return choice;
}
void checkwinner(int userchoice,int computerchoice){

}