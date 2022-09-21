#include<stdio.h>
main()
{
	int n,i,j;
	printf("\n enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j>1;j--){
			printf("%d",j);
		}
		for(j=1;j<=(n-i+1);j++){
			printf("%d",j);
		}
		
		printf("\n");
	}
}
