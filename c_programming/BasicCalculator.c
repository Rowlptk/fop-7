
#include<stdio.h>

void main()
{
    float n1,n2;
    char ch;
    printf("Enter two numbers: ");
    scanf("%f%f",&n1,&n2);
    system("cls");
    printf("********** Menu ***********\n\n");
    printf("Choose any one : \n  +\n  -\n  *\n  /\nSelect: ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("Invalid Option!");
    }
    // loop ==> for, while, do..while, patterns
}
