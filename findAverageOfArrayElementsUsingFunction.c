#include<stdio.h>
int avg(int [],int);
void main()
{
    int marks[5]={10,20,30,40,50},size,average;
    size =sizeof(marks)/sizeof(marks[0]);
    average =avg(marks,size);
    printf("Average =%d \n",average);
    printf("Inside main size of array is (in bytes) %d\n",sizeof(marks));//here size is type multiplied by no. of elements

}
int avg(int marks[],int size)
{
    int i,sum = 0,average = 0;
    for(i=0;i<size;i++)
    {
        sum +=marks[i];
    
    }
    printf("Inside avg size of array is %d \n",sizeof(marks));//4 as it is only pointer to the base address of the given arrayof int type
    average=sum/size;
     return average;
}
