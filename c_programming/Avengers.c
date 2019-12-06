#include<stdio.h>
#include<string.h>

void login();
void menu();
void checkbalance();
void withdraw();
void deposit();
void proceed();

int TotalBalance = 6000;
void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    if(ch == 'Y' || ch == 'y')
    {
        menu();
    }
    else
    {
        exit(0);
    }
}


void deposit()
{
    int da;
    printf("Enter Deposit Amount : ");
    scanf("%d",&da);
    if(da<=5000)
    {
        TotalBalance += da;
        printf("\nAmount Deposited : $%d\n",da);
        printf("\nCurrent Balance : $%d\n",TotalBalance);
    }
    else
    {
        printf("\nAmount Exceeds per transaction limit!\n");
    }
}

void withdraw()
{
    int wa;
    printf("Enter Withdraw Amount : ");
    scanf("%d",&wa);
    if(wa%500 == 0)
    {
        if(wa <= TotalBalance)
        {
            if(wa <= 5000)
            {
                //TotalBalance = TotalBalance - wa;
                TotalBalance -= wa;
                printf("\nWithdraw Amount : $%d\n",wa);
                printf("\nTotal Available Balance : $%d\n", TotalBalance);
            }
            else
            {
                printf("\nAmount must be less than $5000\n");
            }
        }
        else
        {
            printf("\nInsufficient Balance!\n");
        }
    }
    else
    {
        printf("\nAmount must be multiple of 500\n");
    }
}

void checkbalance()
{
    system("cls");
    printf("\nYour Current Balance is $%d\n",TotalBalance);
}

void menu()
{
    int opt;
    system("cls");
    printf("************* Welcome to Avengers bank *****************\n");
    printf("Options : \n1.Check Balance\n2.Withdraw\n3.Deposit\n4.Exit\n  Select : ");
    scanf("%d",&opt);
    system("cls");
    switch(opt)
    {
    case 1:
        checkbalance();
        proceed();
        break;
    case 2:
        withdraw();
        proceed();
        break;
    case 3:
        deposit();
        proceed();
        break;
    case 4:
        exit(0);

    default:
        printf("\nInvalid Options!\n");
        proceed();
    }
}

void login()
{
    char s_user[5][30] = {"admin","Tony","captain","Hulk","Thanos"};
    char s_pwd[5][30] = {"pass","pass1","pass2","pass3","pass4"};
    char user[30],pwd[30];
    int i,flag = 0, count = 1;
    do{
        system("cls");
        printf("Attempt Remaining : %d\n\n",(4-count));
        printf("Enter your username : ");
        gets(user);
        printf("Enter your password : ");
        gets(pwd);

        for(i=0;i<=4;i++)
        {
           if(strcmp(s_user[i],user) == 0)
           {
               flag = 1;
               break;
           }
        }
        count++;
    }while( ((flag !=1)||(strcmp(s_pwd[i],pwd)!=0)) && count <= 3);

    system("cls");
    if(flag == 1 && (strcmp(s_pwd[i],pwd)==0))
    {
       // printf("\nWelcome to Avengers Bank %s\n",user);
       menu();
    }
    else
    {
        printf("Attempt Remaining %d\n",(4-count));
        printf("\nUsername or password didnot match\n");
        printf("Please try after sometime...\n");
    }

}
