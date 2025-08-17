#include <stdio.h>
/*int main(){
    int tableof =0;
    printf("which table you want to get: ");
    scanf("%d",&tableof);
    printf("The table of %d is:\n",tableof);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n",tableof,i,tableof*i);
    }
return 0;
}*/
// int main(){
//     int tableof = 0;
//     printf("Which table you want to have: ");
//     scanf("%d",&tableof);
//     printf("the table of %d is: ",tableof);
//     for(int i = 1;i<=10;i++){
//         printf("%d * %d = %d",tableof,i,tableof*i);
//     }
//     return 0;
// }

// table of the numbers from any initial given number to the final given number 
// basis on the user input.
// int main(){
//     int initial,final;
//     printf("From where you wannna print: ");
//     scanf("%d",&initial);
//     printf("Till where you wanna print the table: ");
//     scanf("%d",&final);
//     if (initial>final)
//     {
//         printf("The initial number cant be bigger than the final one.");
//     }else{
    
//     for(int i = initial;i<=final;i++){
//         if(i >= initial && i <= final){
//         printf("\nTHE TABLE OF %d IS: \n",i);
//         }
//         for(int j = 1; j<=10 ; j++){
//             if (i >= initial && i <= final)
//             {
//                 printf("%d * %d = %d\n",i,j,i*j);
//             }else{
//                 break;
//             }
//         }
//         printf("\n");
//     }}
//     return 0;
// }
//table of the number form 1 to 10 
int main(){
    for(int i = 1;i <= 10;i++){
        printf("The table of %d\n",i);
        printf("\n");    
        for (int j = 1; j <= 10; j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}