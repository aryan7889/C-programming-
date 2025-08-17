#include <stdio.h>
/*
int main(){
    int isprime =1;
    printf("the prime numbers between 1 to 100.\n");
    for(int num= 2;num<=100;num++){
       int isprime =1;
       for(int i =2;i<num;i++){
        if (num%2==0)
        {
            isprime = 0;
            break;
        }
       }
       if (isprime == 1)
       {
            printf("%d is prime.\n",num);
       }
    }
    return 0;
}*/
// since we have done the range question now onto more advance one we have to give the range by the user input and check which is prime so lets try:
int main(){
    int isprime = 1;
    int intial = 0;
    int final = 0;
    printf("Enter the numbers from where you want to check is it prime or not.\n");
    scanf("%d",&intial);
    int startingnum = intial + 1;
    scanf("%d",&final);
    printf("So the numbers which are prime from %d to %d are given below.\n",intial,final);
    for(int num = startingnum;num<=final;num++){
        isprime = 1;
        for(int i = 2;i<num;i++){
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d is prime.\n",num);
        }
    }
    return 0;

}