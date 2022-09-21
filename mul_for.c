#include<stdio.h>
main()
{
	int i,n,mul;
	printf("\n enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		mul=n*i;
		printf("\n %d*%d=%d",i,mul,n,i);
	}
}
