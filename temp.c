#include<stdio.h>
#include <stdio.h>

int main() {
    long long num;
    int d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
    int digit;

    printf("Enter any number: ");
    scanf("%lld", &num);

    if (num == 0) {
        d0 = 1;
    } else {
        while (num != 0) {
            digit = num % 10;
            switch (digit) {
                case 0: d0++; break;
                case 1: d1++; break;
                case 2: d2++; break;
                case 3: d3++; break;
                case 4: d4++; break;
                case 5: d5++; break;
                case 6: d6++; break;
                case 7: d7++; break;
                case 8: d8++; break;
                case 9: d9++; break;
            }
            num = num / 10;
        }
    }
    printf("Frequency of 0 = %d\n", d0);
    printf("Frequency of 1 = %d\n", d1);
    printf("Frequency of 2 = %d\n", d2);
    printf("Frequency of 3 = %d\n", d3);
    printf("Frequency of 4 = %d\n", d4);
    printf("Frequency of 5 = %d\n", d5);
    printf("Frequency of 6 = %d\n", d6);
    printf("Frequency of 7 = %d\n", d7);
    printf("Frequency of 8 = %d\n", d8);
    printf("Frequency of 9 = %d\n", d9);

    return 0;
}