/* Write a program to read a string along with space and print them.. */

#include<stdio.h>
int main()
{
    char x[40];
    printf("Enter the string: ");
    gets(x);
    printf("The given string is ");
    puts(x);

    return 0;
}

/*
output:
Enter the string: Rama Rao
The given string is Rama Rao

Note that just like getchar and putchar.. 
there are two functions named gets and puts
which helps us read a string (along with space) and print a string..
*/