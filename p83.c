/*
Perform all arithmetic operations by chosing the option from the user.
*/

#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Product\n");
    printf("4,Division\n");
    printf("5.Remainder\n");
    printf("Enter the choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter two int values: ");
                scanf("%d %d",&a,&b);
                printf("The sum is %d\n",a+b);
            break;
        case 2: printf("Enter two integer values: ");
                scanf("%d %d",&a,&b);
                printf("The diff is %d\n",a-b);
            break;
        case 3: printf("Enter two int values: ");
                scanf("%d %d",&a,&b);
                printf("The product is %d\n",a*b);
        case 4: printf("Enter the two integers: ");
                scanf("%d %d",&a,&b);
                printf("The div is %f\n",(float)a/b);
            break;
        case 5: printf("Enter two integer values: ");
                scanf("%d %d",&a,&b);
                printf("The value is %d\n",a%b);
            break;
        default: printf("Choose right option\n");
    }
    return 0;
}