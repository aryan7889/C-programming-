#include <stdio.h>
#include <math.h>
int main() {
    int initialnum = 0, finalnum = 0;
    int found = 0;

    printf("The program for checking the Armstrong numbers within the respective range:\n");
    scanf("%d", &initialnum);
    scanf("%d", &finalnum);

    if (initialnum > finalnum) {
        printf("The initial number can't be bigger than the final number.\n");
    } else {
        for (int num = initialnum; num <= finalnum; num++) {
            if (num == 0) { 
                printf("0 is an Armstrong number.\n");
                found = 1;
                continue;
            }

            int original = num, digits = 0, sum = 0;
            int temp = num;

            while (temp != 0) {
                temp = temp / 10;
                digits++;
            }

            temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += pow(digit, digits);
                temp = temp / 10;
            }

            if (sum == original) {
                printf("%d is an Armstrong number.\n", original);
                found = 1;
            }
        }

        if (!found) {
            printf("No Armstrong numbers found in this range.\n");
        }
    }

    return 0;
}
