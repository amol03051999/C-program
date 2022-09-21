#include<stdio.h>
struct employee
{
	int eid;
	char ename[20];
	float esalary;
};
main()
{
	struct employee e1,e2,e3;
	 printf("\n eid,ename,esalary:");
     scanf("%d%s%f",&e1.eid,&e1.ename,&e1.esalary);
	scanf("%d%s%f",&e2.eid,&e2.ename,&e2.esalary);
     scanf("%d%s%f",&e3.eid,&e3.ename,&e3.esalary);
     
     printf("\n eid=%d,ename=%s,esalary=%f",e1.eid,e1.ename,e1.esalary);
      printf("\n eid=%d,ename=%s,esalary=%f",e2.eid,e2.ename,e2.esalary);
       printf("\n eid=%d,ename=%s,esalary=%f",e3.eid,e3.ename,e3.esalary);
}
