#include <stdio.h>
#include <string.h>

int main (){

    char noun[50]= "";
    char verb[50]="";
    char adjective[50]="";
    char adjective2[50]="";
    char adjective3[50]="";

    printf("enter an adjective (description): ");
    fgets(adjective, sizeof(adjective),stdin);
    adjective[strlen(adjective)-1]='\0';

    printf("enter an noun (animal or the person): ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("enter an verb (ending w/ -ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';

    printf("enter an adjective2 (description): ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1]='\0';

    printf("enter an adjective (description): ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1]='\0';


    printf("%s\n",noun);
    printf("%s\n",verb);
    printf("%s\n",adjective);
    printf("%s\n",adjective2);
    printf("%s\n",adjective3);

    return 0;


}