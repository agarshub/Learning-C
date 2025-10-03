/*
Write a program to print all the prime numbers with in between the limits
*/

#include <stdio.h>
int main()
{
    int l1,l2,i,count;
    printf("Enter the limits: ");
    scanf("%d%d",&l1,&l2);

    printf("The prime numbers between %d and %d are:\n",l1,l2);

    while(l1<=l2)
    {
        i=1;
        count=0;
        
        while(i<=l1)
        {
            if( l1 % i == 0) // if l1 is divisible by i, then it is a factor
            {
                count++;  
            }
            i++;
        }

        if(count==2) // if count is 2, then l1 is prime
        {
            printf("%d\n",l1);
        }
        l1++;
    }
    return 0;
}

/*
This is not the most efficient way to find prime numbers
but this is the simplest way to understand the logic
logic:
for example the limits are 10 and 20
the output will be
The prime numbers between 10 and 20 are:
11
13
17
19

here we are using two while loops
outer loop is for the range of numbers from l1 to l2
inner loop is for finding the factors of the number
for each number in the range, we are checking how many factors it has

if the count of factors is 2, then it is prime
there is another way to do this using for loops only
because in this case we know how many numbers are there in the range
so we can use for loop to take input until the user wants to stop
also note that here we are checking for factors from 1 to l1


but we can optimize it by checking from 2 to sqrt(l1)
because a number is not prime if it is divisible by any number other than 1 and itself
so we can skip 1 and l1 and check for factors from 2 to sqrt(l1)
this will reduce the number of iterations and make the program more efficient


also note that we can skip even numbers greater than 2
because all even numbers greater than 2 are not prime
so we can check for 2 separately and then check for odd numbers only
this will further reduce the number of iterations and make the program more efficient
also note that we can use continue statement to skip the even numbers

*/