#include<stdio.h>
#include<conio.h>
int main (){
int r,num,temp,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",num);
temp=num;
while(temp>0){
r=temp%10;
sum +=(r*r*r);
temp=temp/10;
}
//checking condition 
if(sum==num){
  printf("%d is Armstrong number",num);
}
else{
  printf("%d is not armstrong number",num);
}
getch();
return 0;
}
