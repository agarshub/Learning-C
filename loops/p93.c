/*write a program to print the value of iterator of the loop from n times using while loop*/

#include<stdio.h>
int main()
{
    int i=1,n;    // i is called loop variable.. or iterator
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

/*
How actually does the loop work..
1. Initialize the loop variable (i=1)
2. Check the condition (i<=n)
3. If the condition is true, execute the loop body (print the value of i)
4. Increment the loop variable (i++)
5. Repeat steps 2-4 until the condition is false
6. Exit the loop when the condition is false
7. Continue with the rest of the program (return 0)
*/