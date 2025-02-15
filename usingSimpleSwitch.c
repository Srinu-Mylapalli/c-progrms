#include<stdio.h>

void main()
{
    int ch;
    printf("enter a number 0-6 : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        printf("Sunday \n");
        break;
    case 1:
        printf("Monday \n");
        break;
    case 2:
    printf("Tuesday\n");
    break;
    case 3:
    printf("wednesday\n");
    break;
    case 4:
    printf("thursday\n");
    break;
    case 5:
    printf("friday\n");
    break;
    case 6:
    printf("saturday\n");
    break;
    default:
    printf("enter again");
        break;
    }
}
