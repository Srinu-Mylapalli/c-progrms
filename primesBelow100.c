#include<stdio.h>
#include<conio.h>
  int isPrime(int n){
    if (n<=1){
  return 0;
    }
for(int i =2;i*i<=n;i++){
if (n % == 0){
return 0;
}
}
return 1;
}
int main(){
  clrscr();
printf("Prime numbers below 100 are : \n");
for (int num =2;num<100;num++){
if (isPrime(num)){
printf("%d,",num);
}
}
getch();
return 0;
}
