/*
Take the first letter of the colour as input and print the colour in the colour.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("r.RED\n");
    printf("g.Green\n");
    printf("b.Blue\n");
    printf("Enter the choice: ");
    ch=getchat();
    switch(ch)
    {
        case 'r': textcolor(RED+BLINK);
        cprintf("Red\n");
        break;

        case 'g':textcolor(GREEN+BLINK);
        cprintf("Green\n");
        break;

        case 'b': textcolor(BLUE);
        cprintf("Blue %c\n",3);
        break;
    }
    return 0;
}