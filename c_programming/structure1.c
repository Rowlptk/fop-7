#include<stdio.h>

struct bookStore
{
    char name[50];
    int pages;
    float price;
    char rack;
}b[50];

void main()
{
    int n,i,flag = 0;
    char book[50],temp[50];
    printf("How many entry u want to make : ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter book %d name : ",(i+1));
        gets(b[i].name);
        printf("Enter book %d pages : ",(i+1));
        scanf("%d",&b[i].pages);
        printf("Enter book %d Price : ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter book %d rack location : ",(i+1));
        scanf(" %c",&b[i].rack);
        getchar();
        printf("\n");
    }

    printf("Enter a book name: ");
    gets(book);
    for(i=0;i<n;i++)
    {
        strcpy(temp,b[i].name);
        if(strcmp(strlwr(book),strlwr(temp))==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n****************** book %d *********************\n",(i+1));
        printf("Name = %s\nPages = %d\nPrice = $%.2f\nRack = %c\n",b[i].name,b[i].pages,b[i].price,b[i].rack);
        printf("***********************************************\n\n");
    }
    else
    {
        printf("\nBook Not Found!\n");
    }
    /*for(i=0;i<n;i++)
    {
        printf("\n****************** book %d *********************\n",(i+1));
        printf("Name = %s\nPages = %d\nPrice = $%.2f\nRack = %c\n",b[i].name,b[i].pages,b[i].price,b[i].rack);
        printf("***********************************************\n\n");
    }*/
}
