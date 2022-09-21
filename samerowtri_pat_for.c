#include<stdio.h>
main()
{
	int j,i,n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

}
