#include<stdio.h>
main()
{    //to print square number pattern
	int rows,cols,i,j;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++){
			printf("1");
		}
		
		printf("\n");
	}
}
