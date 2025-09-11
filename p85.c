/*
Write a program to perform zll arithmetic operation by choosing symbols as input.
*/

#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("+.Addition\n");
    printf("-.Subtraction\n");
    printf("*.Product\n");
    printf("/.Division\n");
    printf("%.Remainder\n");
    printf("Enter your choice: ");
    scanf("%c",&ch);
    printf("Enter two int values");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case '+': printf("The sum is %d\n",a+b);
            break;
        case '-': printf("The difference is %d\n",a-b);
            break;
        case '*': printf("The product is %d\n",a*b);
            break;
        case '/': printf("The division is %d\n",(float)a/b);
            break;
        case '%': printf("The remainder is %d\n",a%b);
            break;
        default: printf("Choose right option\n");
    }
    return 0;
}