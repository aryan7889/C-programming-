#include <stdio.h>
int main(){
    int n;
    printf("enter the two digit number :");
    scanf("%d",&n);
    int temp = n;
    int twos = temp /10;
    int ones = temp%10;
    switch(twos){
        case 1:printf("X");
        break;
        case 2:printf("XX");
        break;
        case 3:printf("XXX");
        break;
        case 4:printf("XL");
        break;
        case 5:printf("L");
        break;
        case 6:printf("LX");
        break;
        case 7:printf("LXX");
        break;
        case 8:printf("LXXX");
        break;
        case 9:printf("XC");
        break;
    }
    switch(ones){
        case 1:printf("I");
        break;
        case 2:printf("II");
        break;
        case 3:printf("III");
        break;
        case 4:printf("IV");
        break;
        case 5:printf("V");
        break;
        case 6:printf("VI");
        break;
        case 7:printf("VII");
        break;
        case 8:printf("VIII");
        break;
        case 9:printf("IX");
        break;
    }
    return 0;
}