#include<stdio.h>

void main()
{
    int m;
    printf("Enter your Marks : ");
    scanf("%d",&m);
    if(m>=80 && m<=100)
    {
        printf("Grade A");
    }
    else if(m>=60 && m<=79)
    {
        printf("Grade B");
    }
    else if(m>=40 && m<=59)
    {
        printf("Grade C");
    }
    else if(m>=0 && m<=39)
    {
        printf("You Failed!");
    }
    else
    {
        printf("Invalid Marks!");
    }
}

leap year  ==> 1700

2020-02-29 ==> valid
2019-02-29 ==> invalid
2019-04-31 ==> invalid
2019-12-31 ==> valid

y%400==0 ==> leap year ==>
y%4==0 ==> but y%100!=0 ==>

1700
if((y%400 == 0) || ((Y%4==0)&&(y%100!=0)))
{
    printf("leap year.")
}
else
{
    printf("not a leap year. ")
}







