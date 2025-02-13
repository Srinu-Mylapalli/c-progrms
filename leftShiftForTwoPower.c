#include<stdio.h>
#include<conio.h>
//Using bitwise left shift operator ,for power of 2 more than 30 causes overflow giving negative or starting again from 1 as result,for that we ca use pow(,) function from math.h
void main()
{
    int n;double res;
     printf("Enter a number : ");
    scanf("%d",&n);
    res = (double)(1 << n);
printf("2^%d = %.0lf\n",n,res);
}
