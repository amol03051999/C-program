#include<stdio.h>
main()
{
	int arr[10],possition,i,size,value;
	printf("\n enter number of elements in the array:");
	scanf("%d",&size);
	
	printf("\n enter %d elements",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("please enter the locatiion where you want to insert an new element\n");
	scanf("%d",&possition);
	
	printf("\n enter the value\n");
	scanf("%d",&value);
	
	for(i=size-1;i>=possition-1;i--)
	{
		arr[i+1]=arr[i];
		arr[possition-1]=value;
		printf("result aray is \n");
	}
	for(i=0;i<=size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
