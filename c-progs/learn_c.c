#include<stdio.h>
int main()
{
	char a = 'p';
	unsigned char c = 'g';
	short int i = 9;
	printf("size = %c\n",sizeof(char));
	printf("size = %c\n",sizeof(unsigned char));
	printf("size = %d",sizeof(short int));
	//printf("hello");
	return 0;
}