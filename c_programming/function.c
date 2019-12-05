#include<stdio.h>
#include"myheader.h"

void sum(); // function declaration
int sum1();
void sum2(int a, int b);

void main()
{
    int num1, num2;
    num1= 30;
    num2 = 40;
    //sum(); // function call;
    //int x = sum1();
    //printf("The sum is %d",x);
    //printf("The sum is %d",sum1());
    //sum2(2,3);
    sum2(num1,num2);
}



int sum1()
{
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    return (x+y);
}

// function defination
void sum()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("The sum is %d\n",(x+y));
}
