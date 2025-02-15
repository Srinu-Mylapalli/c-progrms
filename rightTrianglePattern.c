#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n=5;
clrscr();
for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
{
printf("%d",j); 
}
printf("\n");
}
getch();
}
/* OUTPUT
1
12
123
1234
12345*/
