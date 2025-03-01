#include<stdio.h>
int main()
{
    char x;
    char sent [25];
    printf("enter the char: ");
   x= getchar();
   sent[15] = (x>='A')&&(x<='Z')?printf("capital letter\n"):printf("Not capital letter\n");

 // sent[24]= (x>=65)&&(x<=90)?printf("capital letter\n"):printf("Not capital letter\n");

return 0;

}
