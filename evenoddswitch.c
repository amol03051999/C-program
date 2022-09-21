#include<stdio.h>
main()
{
	int n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	switch(n%2)
	{
		case 0:
			printf("no.is even");
			break;
			
		case 1:
			printf("no.is odd");
			break;
	}
}
