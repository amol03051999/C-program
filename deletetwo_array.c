#include<stdio.h>
main()
{
	int a[100],pos,i,n;
	printf("\n enter no. of array elements are:");
	scanf("%d",&n);
	printf("\n enter  elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the location where you want to delete element:");
	scanf("%d",pos);
	if(pos>=n+1){
	 
	 printf("\n deletion not possible");
}
	 else
	 {
	 for(i=pos-1;i<=n;i++)
	 {
	 	a[i]=a[i+1];
	 }
	 printf("\n deleting no. of array we get is \n");
	 for(i=0;i<n-1;i++)
	 {
	 	printf("%d",a[i]);
	 }
}}
