/*
Give an example for switch case.
*/

#include<stdio.h>
int main()
{
    int ch;
    printf("1.One\n");
    printf("2.Two\n");
    printf("3.Three\n");
    printf("4.Four\n");
    printf("5.Five\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("One\n");
            break;
        case 2: printf("Two\n");
            break;
        case 3: printf("Three\n");
            break;
        case 4: printf("Four\n");
            break;
        case 5: printf("Five\n");
            break;
        default: printf("Choose 1 or 2 or 3 or 4 or 5");
    }
    return 0;
}