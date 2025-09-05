#include <stdio.h>
#include <limits.h>
int main(){
    int arr1[]={30,20,10,50,45,0,78,92,45,1};
    int size = 12;
    printf("Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    int first = INT_MIN,second = INT_MIN,third = INT_MIN;
    printf("finding the third largest number in the array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Checking the elements: %d\n",arr1[i]);

        //giving the vlaue of the the first second and the third
        if (arr1[i]==first||arr1[i] == second,arr1[i] ==third)
        {
            printf("setting up the value : \n");
            continue;
        }
        if (arr1[i] > first)
        {
            third =second;
            second = first;
            first = arr1[i];
            printf("the new largest numbers first: %d second: %d third: %d\n",first,second,third);
        }
        else if (arr1[i]>second)
        {
            third = second;
            second = arr1[i];
            printf("the new largest numbers first: %d second: %d third: %d\n",first,second,third);
        }
        else if (arr1[i]>third)
        {
            third = arr1 [i];
            printf("the new largest is third: %d");
        }
        else{
        printf("no change needed.\n");
        }
    }
    if (third != INT_MIN)
    {
        printf("\nthird largest number %d\n",third);
    }else{
        printf("number dont exist");
    }
    
    printf("\n");
return 0;
}