/*
write a program to read the character of the month and print which month it is
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("j.January\n");
    printf("f.February\n");
    printf("m.March\n");
    printf("a.April\n");
    printf("M.May\n");
    printf("j.June\n");
    printf("J.July\n");
    printf("a.August\n");
    printf("s.September\n");
    printf("o.October\n");
    printf("n.November\n");
    printf("d.December\n");

    printf("Enter the choice: ");
    ch=getchar();
    switch(ch)
    {
        case 'j': printf("January or June or July\n");
        break;

        case 'f':printf("February\n");
        break;

        case 'm': printf("March or May\n");
        break;

        case 'a': printf("April or August\n");
        break;

        case 's': printf("September\n");
        break;

        case 'o': printf("October\n");
        break;

        case 'n': printf("November\n");
        break;

        case 'd': printf("December\n");
        break;

        default: printf("Invalid Input\n");
    }
    return 0;
}