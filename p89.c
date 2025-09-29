/*
Note: Any statement which contains (:) beside it is not executable in C language.
It is used to denote some space between the program. One example as follows:
*/

#include<stdio.h>
int main()
{
    int a=1;
    random_text:  //this is not executable statement
    printf("Hello!\n");
    a++;  //this is executable statement
    if(a<=5)
    {
        goto random_text;  //goto statement is used to jump to the label
    }

    return 0;
}

/*
Here the goto statement is used to jump to the label "random_text".
If proper conditions not given, it may lead to infinite loop.
for example, if we do not increment the value of 'a' inside the loop,
the program will keep printing "Hello!" indefinitely.

This goto statement is generally avoided in programming because it makes the code
difficult to read and maintain. It can lead to "spaghetti code," where the flow of
execution jumps around in a way that is hard to follow. Structured programming constructs
like loops and functions are preferred for better readability and maintainability.
*/