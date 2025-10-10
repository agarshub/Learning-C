/* Copy the string in another variable and print it */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    printf("Enter the string: ");
    gets(x);

    strcpy(y,x);
    printf("The copied string is %s\n",y);

    return 0;
}

/*
here a string x is copied in string y using inbuilt function strcpy()
*/