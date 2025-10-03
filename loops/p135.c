/*
write a program to  reverse the numbers within range
*/

#include <stdio.h>
int main()
{
    int n1,n2,rev,dup;
    printf("Enter two numbers (n1<n2): ");
    scanf("%d%d",&n1,&n2);
    printf("The reverse of numbers from %d to %d are:\n",n1,n2);

    for(int i=n1; i<=n2; i++)
    {
        rev=0;
        dup=i;
        while(dup>0)
        {
            rev=rev*10 + dup%10;
            dup=dup/10;
        }
        printf("The reverse of %d is %d\n",i,rev);
    }

    return 0;
}

// note that here we are using two loops
// outer loop is for the range of numbers from n1 to n2
// inner loop is for reversing the number
// there is another way to do this using while loops only
// because in this case we dont know how many numbers are there in the range
// so we can use while loop to take input until the user wants to stop