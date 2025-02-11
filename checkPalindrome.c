#include<stdio.h>
#include<conio.h>
//program to check whather a number is palimdrome or nor
int main()
{
int i,num,temp,revNumber=0;
clrscr();
printf("Enter a number :");
scanf("%d",&num);
temp=num;
while(temp>0){
r=temp%10;
revNumber=revNumber*10+r;
temp/10;
}
//check reversed number and read number or equal or not
if(revNumber==num){
printf("%d is a palindrome",num);

}
else{
printf("%d is not a palindrome",num);
}
getch();
return 0;
}

