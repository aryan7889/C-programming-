#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);
int main(){
    int choice = 0;
    float balance = 0.0f;
    printf("Welcome to the bank.\n");
    do
    {
        printf("Enter the choice.\n");
        printf("1.Check the balance.\n");
        printf("2.Deposit the amount.\n");
        printf("3.Withdraw the amount.\n");
        printf("4.Exit the bank.\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            checkbalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("Thanks for using the bank.");
            break;
        default:
            printf("Enter the choice beetween 1 to 4");
        }

    } while (choice != 4);
    
}
void checkbalance(float balance){
    printf("The balance is %.2f\n",balance);
}
float deposit(){
    float amount = 0.0f;
    printf("Enter the amount you want to deposit.\n");
    scanf(" %f",&amount);
    if (amount < 0)
    {
        printf("invalid amount.");
        return 0.0f;
    }else{
        printf("Successfully deposited the amount %.2f\n",amount);
        return amount;
    }
    
}
float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter the amount you want to withdraw.");
    scanf(" %f",&amount);

    if (amount < 0)
    {
        printf("Invalid amount.");
        return 0.0f;
    }else if (amount > balance)
    {
        printf("Insufficient balance");
        return 0.0f;
    }else {
        printf("Successfully withdrew $%.2f",amount);
        return amount;
    }
}