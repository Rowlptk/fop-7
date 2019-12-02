#include<stdio.h>

void main()
{
    char str[500],ch,t,ch1;
    int i = 0;
    printf("Enter a terminating Character : ");
    scanf(" %c",&t);
    printf("Enter a paragraph : \n");

    while(ch != t)
    {
        ch = getchar();
        str[i] = ch;
        i++;
    }


    printf("\n\n");
    i = 0;
    while(ch1 != t)
    {
        ch1 = str[i];
        if(ch1 != t && ch1 != '\n' && ch1 != 'h')
        {
            putchar(ch1);
        }
        i++;
    }


    //puts(str);
}
