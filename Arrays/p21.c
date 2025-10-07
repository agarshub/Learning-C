/* Write a program to read a string and print it (without space)*/

#include<stdio.h>
int main()
{
    char x[10];
    printf("Enter the name: ");
    scanf("%s",&x); // %s is used for a string..

    printf("The given name is %s\n",x);

    return 0;
}

/*

output:
Enter the name: Rama Rao
The given name is Rama

            x 10 bytes
0   1   2   3   4   5   6   7   8   9
---------------------------------------
R   a   m   a  '\0'

here problem is %s reads space as end point and declares the last one as null backslash 0 is used to identify this.. '\0' 
*/