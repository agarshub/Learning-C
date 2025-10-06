/* Write a program to print the elements of the array in reverse order.. */

#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value for a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    // Logic to reverse the array
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    printf("Array in reverse order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}

// note that this program actually reverses the array
// if you just want to print the array in reverse order without changing the original array then see p07.c
// here we are changing the original array by swapping the elements
// we are reversing the array by swapping the first and last elements, then the second and second last elements and so on
// until we reach the middle of the array
/*
example:
Enter the number of elements in the array (max 10): 5
Enter value for a[0]: 10
Enter value for a[1]: 20
Enter value for a[2]: 30
Enter value for a[3]: 40
Enter value for a[4]: 50
Array in reverse order: 50 40 30 20 10
logic:
we are using a for loop to reverse the array
for(i=0,j=n-1;i<j;i++,j--)
{
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

i is the index of the first element
j is the index of the last element
i<j is the condition to stop the loop when i becomes greater than or equal to j
here starting from 0 to 4 we are swapping a[0] and a[4], then a[1] and a[3]
when i becomes 2 and j becomes 2 the loop stops because i is not less than j

so the array is reversed

Original Array
    a
100     200     300     400      500
-------------------------------------
10      20      30      40       50

Reversed Array
    a
100     200     300     400      500
-------------------------------------
50      40      30      20       10
*/