#include<stdio.h>
#include<conio.h>//clrscr() and getch() are not in modern IDEs ,are for turbo C++
int main()
{
  int r=5,val=1;
int i,j;
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
