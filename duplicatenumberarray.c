#include <stdio.h>
main()
{
	int arr[10];
	int i,j,count=0,size;
	 printf("\n eneter array size:");
	 scanf("%d",&size);
	 
	 printf("\n enter %d elements in the aray:\n",size);
	 for (i=0;i<size;i++)
	 {
	 	printf("\n element[%d]:",i);
	 	scanf("%d",&arr[i]);
	 }
	 
	 
	 for(i=0;i<size;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	{
	 		if(arr[i]==arr[j])
	 		{
			 count++;
	 		break;
			}
		 }
	 }
	 printf("\n total number of duplicate elements found in array=%d",count);
}
