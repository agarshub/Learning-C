/* Write a program to read the first character of the day and print which day it is*/

#include<stdio.h>
int main()
{
	char ch;
	printf("m.Monday\n");
	printf("t.Tuesday\n");
	printf("w.Wednesday\n");
	printf("h.Thursday\n");
	printf("f.Friday\n");
	printf("s.Saturday\n");
	printf("u.Sunday\n");
	
	printf("Enter the choice: ");
	ch=getchar();
	switch(ch)
	{
		case 'm': printf("Monday\n");
		break;

		case 't':printf("Tuesday\n");
		break;

		case 'w': printf("Wednesday\n");
		break;

		case 'h': printf("Thursday\n");
		break;

		case 'f': printf("Friday\n");
		break;

		case 's': printf("Saturday\n");
		break;

		case 'u': printf("Sunday\n");
		break;

		default: printf("Invalid Input\n");
	}
	return 0;
}