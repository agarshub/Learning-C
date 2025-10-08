/* Write an example for strnset function.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40], ch;
    int n;
    printf("Enter the string: ");
    gets(x);

    printf("The given string is: ");
    puts(x);

    printf("Enter the char to be set");
    ch = getchar();

    printf("Enter the number of char to be set: ");
    scanf("%d",&n);

    strnset(x,ch,n);

    printf("The given string is %s \n",x);

    return 0;
}