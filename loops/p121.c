/* write a program to detach the number into digits..*/

#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The digits of %d are: ", n);
    while(n>0)
    {
        r = n % 10; // get the last digit
        printf("%d ", r);
        n = n / 10; // remove the last digit
    }
    return 0;
}

/*
here , r is the remainder when n is divided by 10, which gives the last digit of n.
Then, n is updated by dividing it by 10 (integer division), effectively removing the last digit.

logic:
if i take 1234 as a number
1st iteration: r=1234%10=4, print(4) n=1234/10=123
2nd iteration: r=123%10=3, print(3) n=123/10=12
3rd iteration: r=12%10=2, print(2) n=12/10=1
4th iteration: r=1%10=1, print(1) n=1/10=0
Now n is 0, so the loop ends.
*/