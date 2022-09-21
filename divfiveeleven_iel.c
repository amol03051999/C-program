#include<stdio.h>
main()
{
	int n;
	printf("\n enter number=");
	scanf("%d",&n);
	if(n%5==0||n%11==0)
	{
		printf("\n number is divisible  by 5 or 11");
	}
	else
	{
		printf ("\n number is not divisible by 5 or 11");
	}
}
