#include<stdio.h>

void main()
{
    int x[10],i,j,flag;
    printf("Enter 10 Array values : \n");
    for(i=0;i<=9;i++)
    {
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }

    printf("\n\nThe Stored Values in array are :\n");
    for(i=0;i<=9;i++)
    {
        printf("value %d is %d\n",(i+1),x[i]);
    }

    printf("\n\nThe Reverse Order is : \n");
    for(i=9;i>=0;i--)
    {
        printf("value %d is %d\n",(i+1),x[i]);
    }

    printf("\n\nEven Numbers are : \n");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2 == 0)
        {
            printf("%d\n",x[i]);
        }
    }

    printf("\n\nEven Numbers are : \n");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2 != 0)
        {
            printf("%d\n",x[i]);
        }
    }

    printf("\n\nPrime Numbers are : \n");
    for(i=0;i<=9;i++)
    {
        flag = 0;
        if(x[i] == 0 || x[i] == 1)
        {
            flag = 1;
        }
        for(j=2; j<=(x[i]-1); j++)
        {
            if(x[i]%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d\n",x[i]);
        }
    }
 /*   int ary[5] = {12,45,78,-9,0};
    printf("%d",ary[2]);
    ary[2] = 99;
    printf("\n%d",ary[2]);
    printf("Enter ary[%d] value : ",2);
    scanf("%d",&ary[2]);
    printf("%d",ary[2]);
    */
}
