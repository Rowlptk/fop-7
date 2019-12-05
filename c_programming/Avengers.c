#include<stdio.h>
#include<string.h>

void login();
void menu();
void checkbalance();

int TotalBalance = 1000;
void main()
{
    login();
}

void checkbalance()
{
    system("cls");
    printf("\nYour Current Balance is %d\n",TotalBalance);
}

void menu()
{
    int opt;
    printf("************* Welcome to Avengers bank *****************\n");
    printf("Options : \n1.Check Balance\n2.Withdraw\n3.Deposit\n4.Exit\n  Select : ");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        checkbalance();
        break;
    case 2:
        printf("withdraw");
        break;
    case 3:
        printf("Deposit");
        break;
    case 4:
        printf("Exit");
        break;
    default:
        printf("Invalid Options!");
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
