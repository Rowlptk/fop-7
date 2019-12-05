#include<stdio.h>
#include<string.h>
/*
strcmp(str1,str2)  equal ===> 0
                   left  ==> +ve
                   right  => -ve
  Comparision based on ASCII Value
  strupr(str) ==> uppercase
  strlwr(str) ==> lowercase

  strrev(str) ==> reverse string
  strcpy(str1, str2) ==> copy string
  strcat(str1, str2) ==> string jodne(concatenate)
  right is added to left
*/

//functions ==> banking

void main()
{
    char user[5][30] = {"admin","Ram","Shyam","sita","gita"};
    char pwd[5][20] = {"pass","word","12345","pword","Thanos"};
    char usr[30],pd[20];
    int i,flag=0;
    printf("Enter Your user name : ");
    gets(usr);
    printf("Enter Your password : ");
    gets(pd);
    for(i=0;i<=4;i++)
    {
        if(strcmp(strlwr(user[i]),strlwr(usr)) == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1 && (strcmp(pwd[i],pd)==0))
    {
        printf("\nWelcome %s\n",usr);
    }
    else
    {
        printf("\nLogin Failed!\n");
    }

}







