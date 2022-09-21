#include<stdio.h>
main()
{  //to print box number pattern of 1's and 0's
	int rows,cols,i,j;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		if(i==1||i==rows||j==1||j==cols)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		
		printf("\n");
	}
}

