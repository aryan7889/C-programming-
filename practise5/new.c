#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size (try 6 or 10): ");
    scanf("%d", &n);
    
    // Upper part of heart
    for(int i = n/2; i <= n; i += 2) {
        // // Left spaces
        // for(int j = 1; j < n-i/2; j++) {
        //     printf(" ");
        // }    
        
        // Left curve
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Middle spaces
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        
        // Right curve
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Lower part (inverted triangle)
    for(int i = n; i >= 1; i--) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (i*2)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}