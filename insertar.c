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
	 printf("\n enter the number which you want to insert:");
	 scanf("%d",&number);
	 
	 printf("enter the possition which youn want to insert number:");
	 scanf("%d",&pos);
	 
	 for(i=n;i>=pos;i--)
	 {
	 	arr[i+1]=arr[i];
	 }
	 
	 arr[pos]=number;
	 printf("\n inserting no. of array we get is \n");
	 for(i=0;i<=n;i++)
	 {
	 	printf("a[%d]=%d\n",i,arr[i]);
	 }
	 
	 
}
