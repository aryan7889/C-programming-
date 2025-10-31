#include <stdio.h>
int main(){
    char dob[10];
    int randomnumber;
    int consonents,oddsum;
    printf("Enter the dob in the 9 character:");
    scanf("%9s",dob);
    printf("Enter the random number ");
    scanf("%d",&randomnumber);
    for (int i = 0; i < 9; i++)
    {
        char ch = dob[i];
        if ((ch>='A'&&ch<='Z')||(ch<='a'&&ch>='z'))
        {
            char upper = (ch >='a')?ch-32:ch;
            if (ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
            {
                consonents++;
            }
        }
            else if (ch>='0'&&ch<='9')
            {
                int digit = ch-'0';
                if (digit%2!=0)
                {
                    oddsum+=digit;
                }   
            }
    }
    int score = consonents + oddsum;
    printf("Score caalculated from the dob : %d\n",score);
    if ((score%2==0 && randomnumber%2==0)||(score%2!=0 && randomnumber%2!=0))
    {
       printf("Congo !!");
    }else{
        printf("Sorry better luck next time.");
    }
    
    return 0;
}