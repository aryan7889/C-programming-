#include <stdio.h>
#include <string.h>

int main(){
    printf("exercise 2 array length\n");
    char colours[10][20];
    int count = 0;

    strcpy(colours[count++], "red");
    strcpy(colours[count++], "blue");
    strcpy(colours[count++], "green");

    printf("original colours: ");
    for (int i = 0; i < count; i++)
    {
        printf("%s ",colours[i]);
    }
    printf("\n(Count: %d)\n",count);
// if we dont have to make suree where we need to add the colour
    strcpy(colours[count++], "yellow");
    printf("After adding yellow: ");

    for (int i = 0; i < count; i++)
    {
        printf("%s ",colours[i]);
    }

printf("\ncount: %d\n",count);
// so now we have to add to begining:
for (int i = count; i > 0; i--)
{
    strcpy(colours[i], colours[i-1]);
}
strcpy(colours[0],"purple");
count++;

printf("after adding purple to start: \n");
for (int i = 0; i < count; i++){
    printf("%s ",colours[i]);
}
printf("\n(Count: %d)\n",count);

return 0;
}