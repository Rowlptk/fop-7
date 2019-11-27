#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    while(n1<0)
    {
        printf("Enter Positive Value Only : ");
        scanf("%d",&n1);
    }

    printf("Enter second Number : ");
    scanf("%d",&n2);
    while(n2<0)
    {
        printf("Enter Positive Value Only : ");
        scanf("%d",&n2);
    }

    printf("%d + %d = %d", n1,n2,(n1+n2));
}
