#include <stdio.h>
main()
{
	int arr[10];
	int i,possition,element,size,found=0;
	 printf("\n eneter array size:");
	 scanf("%d",&size);
	 
	 printf("\n enter %d elements in the aray:\n",size);
	 for (i=0;i<size;i++)
	 {
	 	printf("\n element[%d]:",i);
	 	scanf("%d",&possition);
	 }
	 
	 	 printf("\n enter location to delete element:");
	 scanf("%d",&possition);
	 
	for(i=0;i<size;i++){
		if(arr[i]==element){
			found==1;
			possition=i;
			break;
		}
	}
	if(found==1)
	{
		for(i=possition;i<size-1;i++){
			arr[i]=arr[i+1];
		}
	
	printf("the resultant vector is\n");
	for(i=0;i<size-1;i++)
	{
		printf("%d\n",arr[i]);
	}
}
else
printf("element %d is not found in the array\n",element);
	 
	 
}
