/*
Write a program to print palindrome numbers with in range
*/

#include <stdio.h>
int main()
{
    int n1,n2,rev,dup;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);
    
    printf("The palindrome numbers from %d to %d are:\n",n1,n2);

    while(n1<=n2)
    {
        rev=0;
        dup=n1;
        while(dup>0)
        {
            rev = rev*10 + dup%10;
            dup = dup/10;
        }
        if(rev==n1)
            printf("%d\n",n1);
        n1++;
    }

    return 0;
}

// note that here unlike previous program i have directly added the rev*10 + dup%10
// instead of storing dup%10 in a variable r and then adding it to rev*10
// in this way we can reduce one variable and reduce the memory usage
// this is just to show that we can do it in one line also
// rest of the logic is same as previous program
// also note that here we are using while loops only