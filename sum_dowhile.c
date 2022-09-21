#include<stdio.h>
main()
{   //to print sum of 1 to 10 numbers
	int i=0,sum;
	
	do
	{
		sum=sum*i;
		printf("\n%d",i,sum);
		i++;
	}
	while(i<=100);
}
