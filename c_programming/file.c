#include<stdio.h>

void main()
{
    FILE *fp;
    char str[500];
    char text[500];
    int flag = 0;
    fp = fopen("search.txt","r");
    if(fp == NULL)
    {
        printf("File not found!");
        exit(0);
    }
    //fscanf(fp,"%s%s",text,str);
    //puts(text);
    //puts(str);
    printf("Enter a string : ");
    gets(str);
    while(fscanf(fp,"%s",text)== 1)
    {
        if(strcmp(text,str) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s exist in search.txt",str);
    }
    else
    {
        printf("text not found!");
    }
}
