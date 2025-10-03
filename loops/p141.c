/*
Write a program to print all the prime numbers with in between the limits
Do it more efficiently this time
*/

#include <stdio.h>
int main()
{
    int l1,l2,i,j,flag;
    printf("Enter the limits: ");
    scanf("%d%d",&l1,&l2);

    printf("The prime numbers between %d and %d are:\n",l1,l2);

    for(i=l1; i<=l2; i++)
    {
        if(i<=1)
            continue; // skip 0 and 1 as they are not prime numbers
        flag=1; // assume i is prime
        for(j=2; j*j<=i; j++) // check for factors from 2 to sqrt(i)
        {
            if(i%j==0) // if i is divisible by j, then it is not prime
            {
                flag=0; // set flag to 0
                break; // no need to check further
            }
        }
        if(flag==1) // if flag is still 1, then i is prime
            printf("%d\n",i);
    }
    return 0;
}

/*
flag is used to keep track of whether the number is prime or not
if flag is 1, then the number is prime
if flag is 0, then the number is not prime

logic:
for example the limits are 10 and 20

the output will be
The prime numbers between 10 and 20 are:
11
13
17
19

here we are using two for loops
outer loop is for the range of numbers from l1 to l2
inner loop is for finding the factors of the number

for each number in the range, we are checking how many factors it has
if the count of factors is 2, then it is prime
we are checking for factors from 2 to sqrt(i)
because any factor greater than sqrt(i) will have a corresponding factor less than sqrt(i)


for example if i=36, then the factors are 1,2,3,4,6,9,12,18,36
the factors greater than sqrt(36)=6 are 9,12,18,36
so we only need to check for factors from 2 to 6
this is more efficient than checking from 1 to i

also note that here we are skipping 0 and 1 as they are not prime numbers
also note that here we are using for loops only
because in this case we know how many numbers are there in the range
so we can use for loop to take input until the user wants to stop

there is another way to do this using while loops only (the previous program)
because in this case we dont know how many numbers are there in the range but that will be less efficient
*/
