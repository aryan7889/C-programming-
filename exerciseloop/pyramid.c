#include <stdio.h>

// int main() {
//     int rows = 5;

//     for(int i = 1;i<=rows;i++){
//         for (int j = 1; j <= rows - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main(){
    int rows = 5;
    for(int i = 1;i<=rows;i++){
        for(int j=1; j<=rows - i;j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for (int l = i -1; l >= 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
/*
I have some questions in my mind regarding the previous question, 
as we have three loops in the solution, and one is the main one,
which will give you the row, then the second one for the spaces,
which will run until the condition does not become false,
then we will come down to the third loop whih wil print the
number on the basis of the value of the i which was at the
begining of the loop then again we will exit and the same
procedure would be there until all get false
*/
/*
for (int i = 1; i <= rows; i++) {     // outer loop → rows
    for (int j = 1; j <= rows - i; j++) {   // 1st inner loop → spaces
        ...
    }
    for (int k = 1; k <= i; k++) {         // 2nd inner loop → ascending numbers
        ...
    }
    for (int k = i - 1; k >= 1; k--) {     // 3rd inner loop → descending numbers
        ...
    }
    printf("\n");                          // move to next row
}
*/