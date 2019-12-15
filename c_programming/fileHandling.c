/*file ==>  text
     ==>  binary

     file ==> open
                write
                read
                close
*/
#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    //fp = fopen("D:\\demo.txt","w");
    //fp = fopen("demo.txt","a");
    //fprintf(fp," text changed!");
    fp = fopen("fileHandling.c","r");
    if(fp == NULL)
    {
        printf("File Not Found!");
    }
    else
    {
        while(!feof(fp))
        {
            ch = fgetc(fp);
            putchar(ch);
        }
    }
    fclose(fp);
}






