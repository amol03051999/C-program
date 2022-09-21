#include<stdio.h>
main()
{
	int i,n;
	printf("\n enter a last number:");
	scanf("%d",&n);
	
	printf("\n number is divisible by 3 or 5:");

	for(i=1;i<=n;i++)
	{
		if(i%3==0||i%5==0)
		{
				printf("\n %d",i);
		}
	
	}
}
