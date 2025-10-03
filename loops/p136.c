/*
write a program to reverse all the numbers with in range
*/

#include <stdio.h>
int main()
{
    int n1,n2,rev,dup,r;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);

    while(n1<=n2)
    {
        dup=n1;
        rev=0;
        while(dup>0)
        {
            r = dup % 10;
            rev = rev * 10 + r;
            dup = dup / 10;
        }
        printf("The reverse of %d is %d\n",n1,rev);
        n1++;
    }
    return 0;
}

/*
logic:
for example the range is 12 to 15

the output will be
The reverse of 12 is 21
The reverse of 13 is 31
The reverse of 14 is 41
The reverse of 15 is 51


here we are using two while loops
outer loop is for the range of numbers from n1 to n2
inner loop is for reversing the number
there is another way to do this using for loops only
because in this case we know how many numbers are there in the range
so we can use for loop to take input until the user wants to stop
*/