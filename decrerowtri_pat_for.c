#include<stdio.h>
main()
{
	int j,i,n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
