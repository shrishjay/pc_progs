#include<stdio.h>
#include<string.h>
struct employee
{
	int code;
	char name[10];
	int salary;
};
int main()
{
  struct employee e1, e2, e3;
	
  printf("please enter the code of employee 1");
	scanf("%d",&e1.code);
	printf("please enter the name of employee 1");
	scanf("%s",e1.name);
	printf("please enter the salary of employee 1");
	scanf("%d",&e1.salary);
	
  printf("please enter the salary of employee 2");
	scanf("%d",&e2.salary);
	printf("please enter the name of employee 2");
	scanf("%s",e2.name);
	printf("please enter the code of employee 2");
	scanf("%d",&e2.code);
	
  printf("please enter the salary of employee 3");
	scanf("%d",&e3.salary);
	printf("please enter the name of employee 3");
	scanf("%s",e3.name);
	printf("please enter the code of employee 3");
	scanf("%d",&e3.code);

  
	return 0;
	
	
}
