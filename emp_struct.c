#include<stdio.h>
struct employee
{
	int eid;
	char ename[20];
	float esalary;
};
main()
{
	struct employee e1;
	printf("\n enter eid=");
	scanf("%d",&e1.eid);
		printf("\n enter ename=");
	scanf("%s",&e1.ename);
		printf("\n enter esalary=");
	scanf("%f",&e1.esalary);
	
	printf("\n eid=%d",e1.eid);
	printf("\n ename=%s",e1.ename);
	printf("\n esalary=%f",e1.esalary);
}
