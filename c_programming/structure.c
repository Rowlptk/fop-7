#include<stdio.h>

struct book
{
    char name[30];
    float price;
    int pages;
    char rack;
}b1,b2;


void main()
{
    //struct book b1,b2;
    printf("Enter book 1 name : ");
    gets(b1.name);
    printf("Enter book 1 price : ");
    scanf("%f",&b1.price);
    printf("Enter book 1 pages : ");
    scanf("%d",&b1.pages);
    printf("Enter book 1 rack : ");
    scanf(" %c",&b1.rack);


    printf("************** book 1 description *****************\n");
    printf("Name = %s\nPrice = %.2f\nPages = %d\nRack = %c",b1.name,b1.price,b1.pages,b1.rack);
}
