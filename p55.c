/* Write a program to check whether the entered char is Enter key or not. */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    (ch == '\n') ? printf("It is an Enter key.\n") : printf("It is not an Enter key.\n");
    printf("%c",'\n');
    printf("%d",'\n'); // ASCII value of '\n' is 10
    return 0;    
}

// Enter key is represented by the newline character '\n' in C.
// When the Enter key is pressed, it generates a newline character in the input buffer.
// note that \n should not be enclosed in single quotes like ' \n ' as it will be treated as two separate characters: a space and the letter n.
// So, we use (ch == '\n') to check if the entered character is the Enter key.