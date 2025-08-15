// determing program 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    bool isrunning = true;
    char response = '\0';

    do
    {
    ("You are playing a game\n");
    printf("would you like to continue playing the game. Press (Y or N)\n");
    scanf("%s",&response);

    if (isrunning != 'Y' && isrunning != 'y')
    {
        isrunning = false;
    }
    }while (isrunning);
   
printf("You exit the game.");
}