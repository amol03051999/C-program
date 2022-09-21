#include<stdio.h>
main()
{
	int rows,cols,i,j,k;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	k=1;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++,k++){
			printf("%-3d",k);
		}
		
		printf("\n");
	}
}

