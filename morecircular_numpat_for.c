#include<stdio.h>
#define size 10
main()
{
	int i,j,n;
	int board[size][size];
	int left,top;
	
	left=0;
	top=size-1;
	n=1;
	for(i=1;i<=size/2;i++,left++,top--)
	{//fill from left to right
		for(j=left;j<=top;j++,n++)
		{
			board[left][j]=n;
		}
		//fill from top to bottom
		for(j=left+1;j<=top;j++,n++)
		{
			board[j][top]=n;
		}
		//fill from right to left
		for(j=top-1;j>=left;j--,n++)
		{
			board[top][j]=n;
		}
		//fill from bottom to top
		for(j=top-1;j>=left+1;j--,n++){
			board[j][left]=n;
		}
	}
	//print the pattern
	for(i=0;i<size;i++)
	{
	    for(j=0;j<size;j++){
		
		printf("%-5d",board[i][j]);
	}
}
	printf("\n");
}
