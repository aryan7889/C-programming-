/*local scope and the global scopee :
local scope as we know nicely tht if we write the name of the two variables
same than it will not workd properly but if writee in the other scope then it would 
works as here is the example of the same:
*/

#include <stdio.h>
int add(int x,int y){
    int result = x + y;
    return result;
}
int subtract(int x,int y){
    int result = x-y;
    return result;
}
int main(){
    int x, y;
    printf("type the numbers on which we need to make the operation.");
    scanf("%d",&x);
    scanf("%d",&y);

    int operation = add(x,y);
    printf("%d",operation);
    return 0;
}
/*so if we want to declare the global variable we only need to do int result 
outside the every function and just need to write the result without any key
word.
*/