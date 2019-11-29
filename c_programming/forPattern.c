#include<stdio.h>
/*
----*
---**
--***
-****
*****
*/

void main()
{
    int j,i,k=33;
    for(i=65;i<=69;i++,k++)
    {
        for(j=68;j>=i;j--)
        {
            printf(" ");
        }
        for(j=65;j<=(2*k-1);j++)
        {
            printf("%c",j);
        }
        printf("\n");

    }


}




