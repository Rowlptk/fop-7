// check even and odd
/*
80 to 100 ==> A
60-79 ==> B
40-59 ==> C
0-39 ==> Fail
0- ra 100+ ==> invalid marks
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number ");
    }
}



