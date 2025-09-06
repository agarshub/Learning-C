/* Write a program to read your gross salary and find the income tax & finally print the net payment receieved. */
/*
gross salary   tax
------------   ----
<=1000000       5%
>1000000        30%
*/

#include<stdio.h>
int main()
{
    float gs,tax,net;
    printf("Enter the Gross Salary: ");
    scanf("%f",&gs);

    if(gs<=1000000)
    {
        tax=0.05*gs;
    }
    else
    {
        tax=gs*0.3;
    }
    printf("Tax is %.2f\n",tax);
    net=gs-tax;
    printf("Net Payment is %.2f\n",net);
    return 0;
}

/*
Note that the %.2f means only 2 decimal places after decimal point while printing.
*/