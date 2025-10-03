/* write a program to find if a number is prime or not using product..*/

#include <stdio.h>
int main()
{
    int n, i=1, prod=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<n)
    {
        if(n%i==0)
        {
            prod*=i; // multiply all factors except the number itself
        }
        i++;
    }
    if(prod==1 && n>1) // A prime number has no divisors other than 1 and itself
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}