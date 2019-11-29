#include<stdio.h>

void main()
{
    int m[4][3],i,j;
    printf("Fill 4x3 Matrix : \n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n\nThe Matrix values are : \n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe Transpose Matrix are : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }
}

string ==> character array  ==> gets, puts, getchar(), putchar()
string functions ==> string.h ==> strcmp(),strcpy(),strlen(), strupr(), strlwr(), strrev(),strcat()
character by character ==>
login.c

functions ==> avengers bank ==> deposit, withdraw, checkbalance



