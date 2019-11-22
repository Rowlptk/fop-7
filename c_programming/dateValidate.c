#include<stdio.h>
// y ==> 1000-3000
// m ==> 1-12
// d ==> 1-30
void main()
{
    int y,m,d;
    printf("Enter a date [yyyy-mm-dd]: ");
    scanf("%d-%d-%d",&y,&m,&d);
    printf("year = %d\nmonth = %d\nday = %d\n",y,m,d);
    if(y>=1000 && y<=3000)
    {
        //printf("Valid Year");
        if(m>=1 && m<=12)
        {
            if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=28) && (m==2))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=29) && (m==2) && ((y%400==0)||((y%4==0)&&(y%100!=0))))
            {
                printf("Date is valid");
            }
            else
            {
                printf("Day is invalid");
            }


           //printf("month is valid");
           /*
           if(d>=1 && d<=30)
           {
               printf("Date is Valid");
           }
           else
           {
               printf("Day is Invalid");
           }
           */
        }
        else
        {
            printf("month is invalid");
        }
    }
    else
    {
        printf("Year is invalid");
    }
}

/*

1-31 , 1,3,5,7,8,10,12
1-30, 4,6,9,11
1-28 , 2
1-29 , 2 , y=>leap

1. jan ==> 31
2. feb ==> 28 / 29(leap year)
3. mar ==> 31
4. apr ==> 30
5. may ==> 31
6. jun ==> 30
7. jul ==> 31
8. aug ==> 31
9. sep ==> 30
10. oct => 31
11. nov => 30
12. dec => 31
*/











