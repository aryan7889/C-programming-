#include <stdio.h>

int main() {
    int n, count = 0;
    printf("How many numbers to check: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int num, original, reversed = 0;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        original = num;
        
        // Reverse the number
        while(num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        
        if(original == reversed) {
            printf("%d is a palindrome\n", original);
            count++;
        } else {
            printf("%d is not a palindrome\n", original);
        }
    }
    
    printf("Total palindromes: %d\n", count);
    return 0;
}