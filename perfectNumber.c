#include<stdio.h>
int main(){
  int num,i,sum=0;
printf("Enter a number:");
scanf("%d",&num);
// a perfect number is a positive integer that is equal to the sum of its proper divisors (divisors excluding the number itself).
//finding sum of divisors of number
for(i=1;i<=num/2;i++){
if(num % i == 0){
sum +=i;
}
}
//check if num is perfect or not
if (sum ==num){
printf("%d is a perfect number",num);
}
else{
printf("%d is not a perfect number",num);
}
return 0;
}
