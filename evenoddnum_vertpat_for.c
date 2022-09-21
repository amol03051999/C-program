#include<stdio.h>
main()
{  //to print no.1 / 0 at even and odd possition
	int rows,cols,i,j;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		if(j%2==1)
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

