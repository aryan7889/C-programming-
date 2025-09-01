// find the index of the number and the location and the 
// find the the number which is greater then the other in the array:
#include <stdio.h>
#include <string.h>

int main(){
    int searcharray[]= {10, 25, 30, 45, 50, 75};
    int size = sizeof(searcharray)/sizeof(searcharray[0]);
    printf("Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",searcharray[i]);

    }
    printf("\n");

    int indexof30 = -1;
    for (int i = 0; i < size; i++)
    {
        if (searcharray[i]==30)
        {
            indexof30 = i;
            break;
        } 
    }
    printf("index of 30 : %d\n",indexof30);
    
    int hassixty = 0;
    for (int i = 0; i < size; i++)
    {
        if (searcharray[i]==60)
        {
            hassixty = 1;
            break;
        }
        
    }
    printf("includes 60: %s\n",hassixty ? "true":"false"); 
    int firstgreaterthen40 = 0;
    int number = 0;
    for (int i = 0; i < size;i++ )
    {
        if (searcharray[i] > 40)
        {
            number = searcharray[i];
            firstgreaterthen40 = 1;
            break;
        } 
    }
    if (firstgreaterthen40)
    {
        printf("first greater then 40 is : %d",number);
    }else {
        printf("no number is bigger then 40");
    }
    
    
    return 0;
}

