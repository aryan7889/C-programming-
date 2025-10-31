#include <stdio.h>
// int main(){
// int x=30, *y, *z;
// y=&x; /* Assume address of x is
// 500 and integer is 4 bytesize */
// z=y;
// *y++=*z++;
// x++;
// printf("&x=%d, y=%d, z=%d\n",x, y, z);
// return 0;
// }
// int main()
// {
// char str[20] = "Hello";
// char *const p=str;

// *p='M';
// printf("%s\n", str);
// return 0;
// }
// int main(){
//     printf("%d,%d\n",sizeof(NULL),sizeof(""));
//     return 0;
// }
// int main(){
//     int arr[2][2][2]={10,2,3,4,5,6,7,8};
//     int *p,*q;
//     p = &arr[1][1][1];
//     q = (int *)arr;
//     printf("%d, %d\n",*p,*q);
// return 0;
// }

// int main() {
//     int a[3][4] = {
//         1, 2, 3, 4,
//         5, 6, 7, 8,
//         9, 10, 11, 12
//     };
//     printf("%u,%u,%u\n", a[0]+1, *(a[0]+1), *(*(a+0)+1));
//     return 0;
// }
// int main(){
    
// void *vp;
// char ch=74, *cp="JACK"; 
// int j=65;
// vp=&ch;
// printf("%c", *(char*)vp); vp=&j;
// printf("%c", *(int*)vp); vp=cp;
// printf("%s", (char*)vp+2);
// return 0;

// }
// int main()
// {
// char
// *str;
// str =
// "%d\n";
// str++;
// str++;
// printf(str-2, 300);
// return 0;
// }
// int main (){
// char *p;
// p="hello";
// printf("%s\n", *&*p);
// return 0;

// }
int main()
{
char str1[] = "India";
char str2[] = "BIX";
char *s1 = str1, *s2=str2;
while(*s1++ = *s2++){
printf("%s", str1);

printf("\n");
}
return 0;
}