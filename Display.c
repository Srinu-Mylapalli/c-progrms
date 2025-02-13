#include<stdio.h>
void display(char[]);
void main()
{
    char str[]="srinu";
    display(str);//name str is actual argument
    printf("size of str is %d\n",sizeof(str));//6 including '\0' NULL character

}
void display(char a[])
{
    printf("hello %s\n",a);//name a is formal argument ,it will point to base address ot the actual argument i.e.,str
    printf("size of a is %d \n",sizeof(a));// 4 as it is pointer
}
