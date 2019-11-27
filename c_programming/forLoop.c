#include<stdio.h>
/*
*
**
***
****
*****
*/
// generate prime numbers from 0 - 50,
// nesting in for
void main()
{
    int i;
    for(i=50;i<=100;i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
    }
}
