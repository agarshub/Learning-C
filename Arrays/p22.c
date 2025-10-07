/* Write a program to */

#include<stdio.h>
int main()
{
    char x[40];
    printf("Enter the string: ");
    scanf("%[^\n]",&x);
    printf("The given string is %s\n", x);

    return 0;
}

/*
understand that here when i give input Rama Rao then out is Rama Rao and not Rama unlike p21.c
because.. using %[^\n] inside the scanf means also considering space and counting all the written characters.. 
but this is not the same with %s while reading.. how ever once stored.. %s will consider space a character in a string and print it ... and the words next to it also

Output1:
Enter the string: Shubham
The given string is Shubham

Output2:
Enter the string: Rama Rao
The given string is Rama Rao
*/