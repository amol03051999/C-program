#include<stdio.h>
main()
{  //to print box pattern 1 with 0 as center
	int rows,cols,i,j,centerrow,centercol;
	printf("\n enter number of rows:");
	scanf("%d",&rows);
	printf("\n enter number of cols:");
	scanf("%d",&cols);
	
	centerrow=(rows+1)/2;
	centercol=(cols+1)/2;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{	
		if(centercol==j&&centerrow==i)
		{
			printf("0");
		}
		else if(cols%2==0&&centercol+1==j)
		{
			if(centerrow==i||(rows%2==0&&centerrow+1==i))
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		else if	(rows%2==0&&centerrow+1==i)
		{
	    	if(centercol==j||(cols%2==0&&centercol+1==j))
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		else
		{
			printf("1");
		}
		}
	printf("\n");
	}
	
}

