#include<stdio.h>
main()
{
	int n;
	printf("\n enter number=");
	scanf("%d",&n);
	if(n%3==0||n%5==0)
	{
		printf("\n number is divisible by 3 or 5");
	}
	else
	{
		printf("\n number is not divisible by 3 or 5");
	}
}
