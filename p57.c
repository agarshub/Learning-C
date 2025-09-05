// Important note

#include<stdio.h>
int main()
{
    int ch;
    ch = '\n';
    printf("%d",ch); // ASCII value of '\n' is 10

    char x;
    x = ' \n ';
    printf("\n%c",x); // It will print space and n
    return 0;
}

/*
Running this program will output:
{10
 }
This is because:
1. The first printf prints the ASCII value of the newline character '\n', which is 10.
2. The second printf prints the character ' \n ', which consists of a space followed by the letter 'n'.
    But since the getchar() function reads only a single character, it will only capture the space character when you input ' \n '. 
    Therefore, the output will be a space but n might not be printed as expected.

Also, this program gives a warning:
warning: multi-character character constant [-Wmultichar]
This warning indicates that ' \n ' is a multi-character constant, which is not standard in C.
This means that using ' \n ' is not a valid way to represent the Enter key or newline character in C.

but we can run this program without any error.
warning will not stop the execution of the program.
but errors will stop the execution of the program.
*/