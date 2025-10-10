/* String const copied (Rama) in variable.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40];
    printf("Enter the string: ");
    gets(x);

    strcpy(x, "Rama");
    printf("The copied string is %s\n",x);
    
    return 0;
}

/*
here lets suppose there is a string stored in x is HELLO WORLD
but by using strcpy we copy the string Rama in x..

note that output is Rama.. and O WORLD will not be printed.. because when we copy Rama..
we also copy the '\0' in the 4th index of Rama
which terminates the string..

*/