#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;
    printf("WElcome to the bank.");

    do
    {
        printf("\nSelect an option:\n");
        printf("1.Check Balance.");
        printf("2. Deposit Money.\n");
        printf("3.Withdrawl Money\n");
        printf("4.Exit\n");
        printf("\nEnter your Choice\n");
        scanf("%d",&choice);

    } while (choice!=4);
    
}


void checkbalance(float balance){

}
float deposit(){
    return 0.0f;
}
float withdraw(float balance){
    return 0.0f;
}