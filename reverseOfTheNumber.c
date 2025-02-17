#include<stdio.h>
#to print reversed numbers between the given two limits
void main()
{
  int l1,l2,r,dup,sum=0;
printf("Enter the two limits: ");
scanf("%d%d",&l1,&l2);
while(l1<=l2)
{
dup = l1;
sum=0;
while(dup>0)
{
r=dup%10;
sum=(sum*10)+r;
dup=dup/10;
}
printf("%d",sum);
l1++;
}
}
