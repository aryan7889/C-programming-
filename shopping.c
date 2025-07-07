#include <stdio.h>
#include <string.h>

int main(){
    char items[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item would you like to buy?: ");
    fgets(items,sizeof(items),stdin);
    items[strlen(items)-1]= '\0';

    printf("what is the price of each item?: ");
    scanf("%f",&price);
    
    printf("what would be the quantity of the items?:");
    scanf("%d", &quantity);
    
    total = price*quantity;
    
    printf("\nYou have bought: %d %s/s\n",quantity,items);
    
    printf("The total of the bill is: %c%.2f",currency,total);

    return 0;

}
//end goal of this project is to prepare the notes of removing the end line character in details so thaat we can remember the stuff it will be doing.