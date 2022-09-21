#include<stdio.h>
main()
{
	char ch;
	printf("\n enter a character:");
	scanf("%d",&ch);
	if (ch=='r'||ch=='R')
	{
		printf("red");
	}
	else if (ch=='o'||ch=='O')
	{
		printf("orange");
	}
	else	if (ch=='y'||ch=='Y')
	{
		printf("yellow");
	}
	else	if (ch=='g'||ch=='G')
	{
		printf("green");
	}
	else	if (ch=='b'||ch=='B')
	{
		printf("blue");
	}
	else	if (ch=='i'||ch=='I')
	{
		printf("indigo");
	}
	else	if (ch=='v'||ch=='V')
	{
		printf("violet");
	}
	else
	{
		printf("your input is wrong");
	}
}
