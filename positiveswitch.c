#include<stdio.h>
main()
{
	int n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	switch(n>0)
	{
		case 1:
			printf("%d is possitive",n);
			break;
		
		case 0:
			switch(n<0)
			{
			case 1:
			printf("%d is negative",n);
			break;
		
		    case 0:
			printf("%d is  zero",n);
			break;
		    }   
			  
	}
}
