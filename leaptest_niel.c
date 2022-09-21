#include<stdio.h>
main()
{
	int year,month;
	printf("\n enter a year:");
	scanf("%d",&year);
	if(year%4==0&&(year%400==0)||(year%100!=0))
	{
		printf("\n you have cleared the first level");
		printf("\n what month has an extra day in leap year:");
		scanf("%d",&month);
	if(month==2)
	{
		printf("\n congratulations!you have cleared the test");
	}
	else 
	{
		printf("\n you have failed the test");
	}
	}
	else
	{
		printf("\n your input is wrong, please try again");
	}
	
}
