#include<stdio.h>
 main()
{
	int arr[10];
	int n,i,j,flag=0;
	
	printf("\n enter elements in array:");
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=",i);
	      scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{ 
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=1;
				printf("\n duplicate number found at possition %d and %d",i,j);
		
			}
		}
	}
	if(flag==0)
	{
		printf("\n array has no duplicate values");
	}
}
