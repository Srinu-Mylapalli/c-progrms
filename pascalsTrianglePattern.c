#include<stdio.h>
#include<conio.h>
int main()
{
  int r=5,val=1;
clrscr();
for(i=0;i<r;i++)
{
//printing the spaces to align the triangle
for(j=0;j<r-i-1;j++)
{
printf(" ");
}
//loop for each element in the row
for(j=0;j<i;j++)
{
printf("%d ",val);
if(j<i){
val=val*(i-j)/(j+1);
}
}
printf("\n");
getch();
}
