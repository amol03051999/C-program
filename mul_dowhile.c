#include<stdio.h>
main()
{
	int i=0,n,mul;
	printf("\n enter a number:");
	scanf("%d",&n);
     do
	{
		mul=n*i;
		printf("\n %d*%d=%d",i,mul,n*i);
		i++;
	}
		while(i<=n);
}
