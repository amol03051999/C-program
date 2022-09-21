#include<stdio.h>
main()
{
	int i=1,n;
	printf("\n enter a last number:");
	scanf("%d",&n);
	
	printf("\n number is divisible by 3 or 5:");

	do
	{
		if(i%3==0||i%5==0)
		{
				printf("\n %d",i);
				
		}
		i++;
	
	}
	while(i<=n);
}
