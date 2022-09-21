#include<stdio.h>
main()
{
	int n,i,j;
	printf("\n enter number");
	scanf("%d",&n);
	// first upper half of the pattern
	for(i=n;i>=1;i--)
	{//first inner part of upper half
		for(j=n;j>i;j--)
		{
			printf("%d",j);
		}
		//second inner part of upper half
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d",i);
		}
		//third inner part of upper half
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	//second lower half of the pattern
	for(i=1;i<n;i++)
	{//first inner part of lower half
		for(j=n;j>i;j--)
		{
			printf("%d",j);
		}
		//second inner part of lower half
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d",i+1);
		}
		//third inner part of lower half
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
