/* Write a program to read the chapter whether its upper or not (use character constants). */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character: ");
    x=getchar();

    if((x>='A')&&(x<='Z'))
    {
        printf("Upper\n");
    }
    else
    {
        printf("Not Upper\n");
    }
    return 0;
}