#include <stdio.h>

int main() {
    int rows = 5;
    
    // Upper half
    for (int i = 0; i < rows; i++) {
        // Leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Stars
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf("*");
        }
        
        
        printf("\n");
    }
    for (int i = rows - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Stars
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf("*");
        }
        // Trailing spaces
        
        printf("\n");
    }
    return 0;
}