#include<stdio.h>
main()
{
	int j,i,n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

}
