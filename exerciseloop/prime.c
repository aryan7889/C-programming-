//checking whether the number is prime or not:
#include <stdio.h>
// int main(){
//     int num=0;
//     int isprimme=1;
//     printf("Enter the number: ",num);
//     scanf("%d",&num);

//     if (num <= 1 && num % 2 == 0 && num != 2)
//     {
//         isprimme = 0;
//     }else{
//         for (int i = 2; i < num; i++)
//         {
//             if (num % i == 0)
//             {
//                 isprimme = 0;
//                 break;
//             }
            
//         }
        
//     }
//     if (isprimme==1)
//     {
//         printf("%d is the prime number.\n",num);
//     }else{
//         printf("%d is not the prime number.\n",num);
//     }
// return 0;
// }
int main(){
    int num = 0;
    int isprime = 1;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num<=1 && num % 2 == 0 ){
        isprime = 0;
    }else{
        for(int i=2;i<num;i++){
            if (num % i == 0)
            {
                isprime = 0;
                break;
            } 
        }
    }
    if (isprime == 1)
    {
        printf("%d iS the prime number",num);
    }else{
        printf("%d iS not the prime number",num);
    }
    return 0;
}