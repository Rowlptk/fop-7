#include<stdio.h>
// if u r above 18 , u can vote
// num1, num2 ==> saano
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    (age>=18)?printf("you are eligible to vote."):
        printf("Oops! You are too young.");
}
