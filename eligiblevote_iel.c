#include<stdio.h>
main()
{    //to check person is eligible for voting or not
	int age;
	printf("\n enter age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n enter persson is eligible for voting");
	}
	else
	{
		printf("\n enter persson is not eligible for voting");
	}
}
