#include<stdio.h>
main()
{     //to print 1 to 10 numbers
	int i=1,range;
	printf("\n enter range:");
	scanf("%d",&range);
	while(i<=range)
	{
		printf("\n %d",i);
		i++;
	}
}
