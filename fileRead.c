#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("abc.txt","r");//In "r" mode reads the already existing files only ,else returns NULL
    if(fp == NULL)
    {
        printf("couldn't open file ");
        exit(1);
    }
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    }
