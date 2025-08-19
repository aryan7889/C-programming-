#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;
    printf("WElcome to the bank.\n");

    do
    {
        printf("\nSelect an option:\n");
        printf("1.Check Balance.\n");
        printf("2. Deposit Money.\n");
        printf("3.Withdrawl Money\n");
        printf("4.Exit\n");
        printf("\nEnter your Choice\n");
        scanf(" %d",&choice);
        

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
            printf("Thank you for using the bank");
            break;
        default:
            printf("Invalid choice plz select number between 1 to 4");
        }

    } while (choice!=4);
    
}


void checkbalance(float balance){
    printf("Your current balnace is: $%.2f",balance);
}
float deposit(){
    float amount = 0.0f;
    printf("Enter the amount to deposit.\n");
    scanf(" %f",&amount);
    if (amount < 0)
    {
        printf("invalid amount.\n");
        return 0.0f;
    }else{
        printf("Successfully deposited $%.2f\n",amount);
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