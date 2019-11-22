#include<stdio.h>

void main()
{
    int n1,n2,n3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    ((n1>n2)&&(n1>n3))?printf("n1 is thulo"):
        ((n2>n3)?printf("n2 is greater"):
         printf("n3 is greater"));

}
