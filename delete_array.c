#include<stdio.h>
main()
{
	int arr[10],i,pos,n,number;
		printf("\n enter number of elements in the array:");
	scanf("%d",&n);
	
	 printf("\n enter array elements:");
	 for(i=0;i<n;i++)
	 
	 {
	 scanf("%d",&arr[i]);
	 }
	 
	 printf("\n elements of array are:");
	 scanf("%d",&number);
	 
	 for(i=0;i<=n;i++)
	 {
	 	printf("a[%d]=%d\n",i,arr[i]);
	 }
	 printf("\n enter the number which you want to delete:");
	 scanf("%d",&number);
	 
	 printf("enter the location which youn want to delete number:");
	 scanf("%d",&pos);
	 
	 if(pos>=n+1){
	 
	 printf("\n deletion not possible");
}
	 else
	 {
	 for(i=pos-1;i<=n;i++)
	 {
	 	arr[i]=arr[i+1];
	 }
	 printf("\n deleting no. of array we get is \n");
	 for(i=0;i<n-1;i++)
	 {
	 	printf("a[%d]=%d\n",i,arr[i]);
	 }
}
	 
}
