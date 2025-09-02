/* Write a program to read one integer , one character and one float and print them. */

#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    printf("Enter an integer, a character and a float: ");
    scanf("%d %c%f",&a,&b,&c);  // in some softwares like Turbo C, there should be a space before %c in scanf to avoid skipping the character input.
    printf("The given data is : ");
    printf("%d   %c   %f",a,b,c);
    return 0;
}