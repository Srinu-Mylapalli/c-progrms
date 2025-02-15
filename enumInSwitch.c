#include<stdio.h>

enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};// is giving int values from zero onwards to each name inside it
void main()
{
    int ch;
    printf("enter a number 0-6 : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case sunday:
        printf("Sunday \n");break;
    case monday:
        printf("Monday \n");
        break;
    case tuesday:
    printf("Tuesday\n");
    break;
    case wednesday:
    printf("wednesday\n");
    break;
    case thursday:
    printf("thursday\n");
    break;
    case friday:
    printf("friday\n");
    break;
    case saturday:
    printf("saturday\n");
    break;
    default:
    printf("enter again");
        break;
    }
}
