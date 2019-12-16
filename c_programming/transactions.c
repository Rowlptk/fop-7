#include<stdio.h>

void deposit();
void withdraw();
void checkbalance();
int read();
void write(int n);


void main()
{
    int n;
    printf("Press:\n1. Deposit\n2. Withdraw\n3. Check Balance\nSelect: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        deposit();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        checkbalance();
        break;
    default:
        printf("Invalid Option!");
    }
}

void deposit()
{
    int da,n = read();
    printf("Enter Amount to Deposit : ");
    scanf("%d",&da);
    n = n + da;
    write(n);
    printf("DA = %d\n",da);
    printf("TB = %d",read());
}


void withdraw()
{
    int wa,n = read();
    printf("Enter Amount to withdraw : ");
    scanf("%d",&wa);
    if(wa<=n)
    {
        n = n - wa;
        write(n);
        printf("WA = %d\n",wa);
        printf("TB = %d\n",n);
    }
    else
    {
        printf("Insufficient Balance!");
    }
}

void write(int n)
{
    FILE *fp;
    fp = fopen("balance.txt", "a");
    fprintf(fp,"%d\n",n);
    fclose(fp);
}

void checkbalance()
{
    int n = read();
    printf("Your Total Balance is %d",n);
}

int read()
{
    FILE *fp;
    int n;
    fp = fopen("balance.txt","r");
    if(fp == NULL)
    {
        printf("Internal Error!");
        exit(0);
    }
    while(fscanf(fp,"%d",&n)==1);
    fclose(fp);
    return n;
}
