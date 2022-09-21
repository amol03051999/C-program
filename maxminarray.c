#include <stdio.h>
main()
{
	int arr[10];
	int i,max,min,size;
	 printf("\n eneter array size:");
	 scanf("%d",&size);
	 
	 printf("\n enter %d elements in the aray:\n",size);
	 for (i=0;i<size;i++)
	 {
	 	printf("\n element[%d]:",i);
	 	scanf("%d",&arr[i]);
	 }
	 max=arr[0];
	 min=arr[0];
	 
	 for(i=1;i<size;i++)
	 {
	 	if(arr[i]>max)
	 	{
	 		max=arr[i];
		 }
		 if(arr[i]<min)
		 {
		 	min=arr[i];
		 }
	 }
	 printf("maximum element=%d\n",max);
	 printf(" minimum element=%d\n",min);
}
