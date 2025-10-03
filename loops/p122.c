/*write a program to detach the number into digits og even only*/

#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even digits in %d are: ", n);
    while(n > 0)
    {
        r = n % 10; // get the last digit
        if(r % 2 == 0) // check if the digit is even
        {
            printf("%d ", r);
        }
        n = n / 10; // remove the last digit
    }
    return 0;
}