/*
Do all arithmatic operations using character variable.
*/

#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Product\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    printf("Enter your choice: ");
    scanf("%c",&ch);
    printf("Enter two int values");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case '1': printf("The sum is %d\n",a+b);
            break;
        case 50: printf("The difference is %d\n",a-b);
            break;
        case '3': printf("The product is %d\n",a*b);
            break;
        case 52: printf("The div is %f\n",(float)a/b);
            break;
        case '5': printf("The remainder is %d\n",a%b);
            break;
        default: printf("Choose right value");
    }
    return 0;
}