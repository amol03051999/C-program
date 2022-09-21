#include<stdio.h>
main()
{  //to print box number pattern with cross center
	int rows,cols,i,j,k;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	k=1;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++){
		
		if(k==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		k*=-1;
	}
		if(cols%2==0)
		{
			k*=-1;
		}
		
		printf("\n");
	}
}

