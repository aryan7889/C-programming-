// for loop is generally use for writing the code for some limited number of time
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    printf("Happy new year");
    return 0;
}
// break and continue:
// break:it help us to exit the loop by using it in the if statement and
// it is like the stop button in the remote.

/*contine:
it is the keyword which help us to get through the the some part of the code which 
we need not to execute we just need to write the if statement for it and write 
continue; in the parethises of the if.
*/

/*And one more command to make sure that our code would be taking 
some time to execute so we need to make sure using the sleep 
command and type the miliseconds we need it after to get run
*/